/* { dg-xfail-if "Clang doesn't support inline asm for ARC yet" { arc-*-* && is_clang } {"*"} {"-O2 -flto"} } */

struct A {
  long a;
};

static inline void foo(struct A *x)
{
  __asm__ __volatile__("" : "+m"(x->a) : "r"(x) : "memory", "cc");
}

static inline void bar(struct A *x)
{
  foo(x);
}

struct B { char buf[640]; struct A a; };
struct B b[32];

int baz(void)
{
  int i;
  struct B *j;
  for (i = 1; i < 32; i++)
    {
      j = &b[i];
      bar(&j->a);
    }
  return 0;
}
