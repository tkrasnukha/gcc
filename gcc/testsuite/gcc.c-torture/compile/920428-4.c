/* { dg-skip-if "requires alloca" { ! alloca } { "-O0" } { "" } } */
/* { dg-skip-if "vla in structure - unsupported GNU extension" { is_clang } } */

x(a){struct{int p[a],i;}l;l.i;}
