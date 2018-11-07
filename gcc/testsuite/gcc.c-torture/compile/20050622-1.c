/* { dg-additional-options "-DARRAY_SIZE=1024" { target { is_clang } } } */

#ifndef ARRAY_SIZE
  #if __SCHAR_MAX__ == 127 && __INT_MAX__ >= 2147483647
    #define ARRAY_SIZE (72*1024*1024)
  #else
    #define ARRAY_SIZE 64
  #endif
#endif

struct S { char buf[ARRAY_SIZE]; };

extern void bar (struct S);

struct S s;

int
foo (void)
{
  bar (s);
  return 0;
}
