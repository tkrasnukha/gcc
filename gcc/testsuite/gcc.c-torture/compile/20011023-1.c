/* Test whether tree inlining works with prototyped nested functions.  */
/* { dg-require-effective-target trampolines } */

extern void foo (char *x);
void bar (void);
void bar (void)
{
  auto void baz (void);
  void baz (void)
    {
      char tmp[2];
      foo (tmp);
    }
  baz ();
}
