/* { dg-require-effective-target label_values } */
/* { dg-xfail-if "Clang doesn't support 'label-as-value' for ARC yet" { arc-*-*  && is_clang } } */

extern int printk(const char *fmt, ...);

void foo (int x, int y)
{
  __label__ here;
  here:
  printk ("", &&here);
}
