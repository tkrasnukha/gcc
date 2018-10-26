/* { dg-options "-fno-early-inlining" { target { ! is_clang } } } */
void
bar ()
{
  bar (0);
}

__attribute__ ((flatten))
void foo ()
{
  bar ();
}
