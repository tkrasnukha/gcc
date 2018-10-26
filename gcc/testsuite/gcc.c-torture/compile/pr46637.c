/* PR middle-end/46637 */
/* { dg-skip-if "Clang doesn't support inline asm for ARC yet" { arc-*-*  && is_clang } {"*"} {"-O2 -flto"} } */

struct S { int s[5]; } *p;

void
foo (long x)
{
  long a = x == 1 ? 4L : 1L;
  asm ("" : "+m" (p->s[a]));
  p->s[0]++;
}
