/* { dg-xfail-if "Clang doesn't support inline asm for ARC yet" { arc-*-* && is_clang } {"*"} {"-O2 -flto"} } */

int ptrace_setregs(void)
{
  union { unsigned int l; int t; } __gu_tmp;
  __asm__ __volatile__("" : "=r" (__gu_tmp.l));
  return __gu_tmp.t;
}
