/* PR inline-asm/63282 */

void bar (void);

void
foo (void)
{
  asm volatile goto ("" : : : : a, b); /* { dg-error "not supported yet" { target { is_clang } } } */
a:
  bar ();
b:
  return;
}
