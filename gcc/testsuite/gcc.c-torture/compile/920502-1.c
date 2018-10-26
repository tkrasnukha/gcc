/* { dg-require-effective-target indirect_jumps } */

extern void*t[];x(i){goto*t[i];} /* { dg-error "indirect goto in function with no address-of-label expressions" { is_clang } } */
