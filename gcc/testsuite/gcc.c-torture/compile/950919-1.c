/* { dg-skip-if "preprocessor assertions are not supported" { is_clang } } */

#define empty
#if empty#cpu(m68k)
#endif

f (){}
