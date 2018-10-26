/* PR tree-optimization/38789 */
/* { dg-do compile } */
/* { dg-xfail-if "Clang doesn't support inline asm for ARC yet" { arc-*-* && is_clang } {"*"} {"-O2 -flto"} } */

void
baz (int v)
{
  unsigned a = (v == 1) ? 1 : 2;

  if (__builtin_constant_p (a))
    asm volatile ("# constant %0" :: "i" (a));
  else
    asm volatile ("# register %0" :: "r" (a));

  a = 6;
  if (__builtin_constant_p (a))
    asm volatile ("# constant %0" :: "i" (a));
  else
    asm volatile ("# register %0" :: "r" (a));
}
