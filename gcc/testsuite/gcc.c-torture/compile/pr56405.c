/* PR inline-asm/56405 */
/* { dg-skip-if "Clang doesn't support inline asm for ARC yet" { arc-*-*  && is_clang } {"*"} {"-O2 -flto"} } */

void
foo (void)
{
  asm volatile ("" : "+m" (*(volatile unsigned short *) 0x1001UL));
}
