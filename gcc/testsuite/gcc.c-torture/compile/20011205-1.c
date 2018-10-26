/* Failure to mark_addressable all operands before evaluation means we
   don't set up the proper temporaries, which leaves us with an asm that
   doesn't match its contraints.  */
/* { dg-xfail-if "Clang doesn't support inline asm for ARC yet" { arc-*-* && is_clang } {"*"} {"-O2 -flto"} } */

long foo()
{
  long x;
  asm("" : "=r"(x) : "m"(x));
  return x;
}
