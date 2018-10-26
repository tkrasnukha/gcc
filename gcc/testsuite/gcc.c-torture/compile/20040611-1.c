/* This would cause PRE load motion to generate invalid code and ICE */
/* { dg-xfail-if "Clang doesn't support inline asm for ARC yet" { arc-*-* && is_clang } {"-O0"} } */
void foo (char *name)
{
  if (*name)
    name ++;
  while (name[0]);
  asm ("" : "=r" (name));
}
