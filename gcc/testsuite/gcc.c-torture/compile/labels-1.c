/* { dg-require-effective-target label_values } */
/* { dg-xfail-if "Clang doesn't support 'label-as-value' for ARC yet" { arc-*-*  && is_clang } } */

f ()
{
  void *x = &&L2;
  if (&&L3 - &&L1 > 1)
    abort();
 L1: return 1;
 L2: abort ();
 L3:;
}
