/* { dg-options "-O2 -funroll-loops" } */
/* { dg-additional-options "-fno-tree-dominator-opts -fno-tree-loop-im -fno-code-hoisting -fno-tree-pre -fno-guess-branch-probability" { target { ! is_clang } } } */
int tw, be;

void
fp (void)
{
  if (tw == 0)
    goto gq;
  else if (be == 0)
    goto ob;
  else
    return;

  for (;;)
    if (tw < 1)
      {
        while (tw < 1)
          {
 gq:
            tw = 0;
          }

        while (be < 1)
          {
 ob:
            tw = 0;
          }

        while (be < 1)
          ++be;
      }
}

