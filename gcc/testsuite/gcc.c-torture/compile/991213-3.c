/* { dg-require-effective-target indirect_jumps } */

int jump () { goto * (int (*) ()) 0xbabebec0; } /* { dg-error "indirect goto in function with no address-of-label expressions" { is_clang } } */

