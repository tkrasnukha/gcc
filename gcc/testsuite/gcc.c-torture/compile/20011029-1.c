/* { dg-require-effective-target indirect_jumps } */
/* { dg-xfail-if "__builtin_setjmp is not implemented yet" { arc-*-* && is_clang } } */

void foo (void *) __attribute__ ((noreturn));

void
bar (void *x)
{
  if (__builtin_setjmp (x))
    return;
  foo (x);
}
