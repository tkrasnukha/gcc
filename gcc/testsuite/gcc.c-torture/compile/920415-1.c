/* { dg-require-effective-target indirect_jumps } */
/* { dg-require-effective-target label_values } */
/* { dg-require-effective-target trampolines } */
/* { dg-options "-Wno-return-type -Wno-implicit-int" } */

extern void abort (void);
extern void exit (int);

f ()
{
  __label__ l;
  void *x()
    {
      return &&l;
    }
  goto *x ();
  abort ();
  return;
 l:
  exit (0);
}
