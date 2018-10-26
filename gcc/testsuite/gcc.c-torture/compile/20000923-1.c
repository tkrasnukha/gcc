/* { dg-require-effective-target alloca } */
/* { dg-xfail-if "Clang doesn't support inline asm for ARC yet" { arc-*-* && is_clang } {"*"} {"-O2 -flto"} } */

const int a = 3;
const int b = 50;

void foo (void)
{
  long int x[a][b];
  asm ("" : : "r" (x) : "memory");
}
