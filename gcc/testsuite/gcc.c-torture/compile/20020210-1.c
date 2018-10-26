/* PR c/5615 */
/* { dg-skip-if "vla in structure - unsupported GNU extension" { is_clang } } */

void f(int a, struct {int b[a];} c) {}
