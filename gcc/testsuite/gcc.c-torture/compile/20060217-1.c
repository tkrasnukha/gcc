/* PR middle-end/26334 */
/* { dg-xfail-if "Clang doesn't support inline asm for ARC yet" { arc-*-* && is_clang } {"*"} {"-O2 -flto"} } */

struct U
{
  unsigned int u[256];
};

struct S
{
  int u, v, w, x;
  int s[255];
};

int
foo (struct U *x, struct S *y)
{
  register int i;
  for (i = 0; i < 255; i++)
    {
      unsigned int v;
      __asm__ ("" : "=r" (v) : "0" (x->u[i + 1]) : "cc");
      y->s[i] = v;
    }
  return 0;
}
