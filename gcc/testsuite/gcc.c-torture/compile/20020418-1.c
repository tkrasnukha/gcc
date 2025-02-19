/* PR c/6358
   This testcase ICEd on IA-32 in foo, because current_function_return_rtx
   was assigned a hard register only after expand_null_return was called,
   thus return pseudo was clobbered twice and the hard register not at
   all.  */
/* { dg-options "-Wno-return-type -Wno-implicit-int" } */

void baz (void);
                       
double foo (void)
{
  baz ();
  return;
}

double bar (void)
{
  baz ();
}
