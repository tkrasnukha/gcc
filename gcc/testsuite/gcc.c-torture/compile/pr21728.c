/* { dg-require-effective-target indirect_jumps } */
/* { dg-require-effective-target trampolines } */

int main (void)
{
  __label__ l1;
  void __attribute__((used)) q(void)
  {
    goto l1;
  }

  l1:;
}
