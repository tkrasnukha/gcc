/* { dg-xfail-if "Clang doesn't support inline asm for ARC yet" { arc-*-* && is_clang } {"*"} {"-O2 -flto"} } */
/* PR target/37395 */

int
f (int j)
{
  int i;
  asm volatile ("" : "=r"(i));
  if (i >= 0)
    j = 0;
  return j;
}
