/* PR 21105 */
/* { dg-require-effective-target trampolines } */

void
CheckFile ()
{
  char tagname[10];
  char *a = tagname;

  int validate ()
  {
    return (a == tagname + 4);
  }

  if (a == tagname)
    validate ();
}
