/* { dg-skip-if "requires alloca" { ! alloca } { "-O0" } { "" } } */
/* { dg-skip-if "vla in structure - unsupported GNU extension" { is_clang } } */

__inline int f(int i)
{
  struct {
    int t[i];
  } t;
  return sizeof(t.t[i--]);
}

int g(int i)
{
  return f(i);
}
