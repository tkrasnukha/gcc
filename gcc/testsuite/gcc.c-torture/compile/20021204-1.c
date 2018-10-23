/* PR c/7622 */

/* Verify that GCC can handle the mix of
   extern inline and nested functions. */

/* { dg-require-effective-target trampolines } */

extern inline int t()
{
  int q() { return 0; }

  return q();
}

int foo()
{
  return t();
}
