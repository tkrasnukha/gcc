/* { dg-options "-flive-range-shrinkage" { target { ! is_clang } } } */
void f()
{
  int i = 0;
  void *p = 0;
}
