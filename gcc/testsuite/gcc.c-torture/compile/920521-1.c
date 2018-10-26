/* { dg-do compile } */
/* { dg-xfail-if "Clang doesn't support inline asm for ARC yet" { arc-*-* && is_clang } {"*"} {"-O2 -flto"} } */

f(){asm("f":::"cc");}g(x,y){asm("g"::"%r"(x), "r"(y));}
