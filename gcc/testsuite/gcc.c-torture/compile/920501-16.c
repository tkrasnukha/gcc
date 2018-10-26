/* { dg-skip-if "vla in structure - unsupported GNU extension" { is_clang } } */

f(n){struct z{int a,b[n],c[n];};}
