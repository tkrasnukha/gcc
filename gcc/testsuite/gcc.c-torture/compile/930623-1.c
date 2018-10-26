/* { dg-require-effective-target untyped_assembly } */
/* { dg-skip-if "__builtin_apply is not supported" { is_clang } } */

g (a, b) {}

f (xx)
     void* xx;
{
  __builtin_apply ((void*)g, xx, 200);
}
