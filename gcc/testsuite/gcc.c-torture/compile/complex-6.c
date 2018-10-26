/* PR tree-opt/35737 */
/* { dg-require-effective-target indirect_jumps } */
/* { dg-xfail-if "__builtin_setjmp is not implemented yet" { arc-*-* && is_clang } } */

long buf[10];

int foo()
{
  __complex__ int i = 0;

  if (__builtin_setjmp(buf))
  {
    i = 1;
    bar();
  }

  return i == 0;
}

