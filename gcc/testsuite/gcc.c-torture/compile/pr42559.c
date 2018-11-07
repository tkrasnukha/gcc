/* { dg-require-effective-target label_values } */
/* { dg-xfail-if "Clang doesn't support 'label-as-value' for ARC yet" { arc-*-*  && is_clang } } */

void jumpfunc(int copy, void *p)
{
  void *l = &&jumplabel;
  if (copy)
    __builtin___memcpy_chk (p, l, 128, __builtin_object_size (p, 0));
jumplabel:
  return;
}
