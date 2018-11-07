/* { dg-require-effective-target indirect_jumps } */
/* { dg-require-effective-target label_values } */
/* { dg-xfail-if "Clang doesn't support 'label-as-value' for ARC yet" { arc-*-*  && is_clang } } */

void bar (int k)
{
  void *label = (k) ? &&x : &&y;
  if (k)
    goto *label;

x:
  if (k)
    dont_remove ();
y:
  return;
}
