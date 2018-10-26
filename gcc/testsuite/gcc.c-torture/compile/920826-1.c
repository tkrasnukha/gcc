/* { dg-require-effective-target indirect_jumps } */

f(int*x){goto*(char)*x;} /* { dg-error "indirect goto in function with no address-of-label expressions" { is_clang } } */
