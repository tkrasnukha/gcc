/* { dg-require-effective-target label_values } */
/* { dg-xfail-if "Clang doesn't support 'label-as-value' for ARC yet" { arc-*-*  && is_clang } } */

int
main()
{
l1:
  return &&l1-&&l2;
l2:;
}
