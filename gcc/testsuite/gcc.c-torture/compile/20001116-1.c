/* { dg-skip-if "This code violates C standard in section 6.6"  { is_clang } } */

int x[60];
char *y = ((char*)&(x[2*8 + 2]) - 8);
int z = (&"Foobar"[1] - &"Foobar"[0]);
