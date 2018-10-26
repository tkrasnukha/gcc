/* { dg-do compile } */
/* { dg-skip-if "" { pdp11-*-* } } */
/* { dg-xfail-if "Clang doesn't support inline asm for ARC yet" { arc-*-* && is_clang } {"*"} {"-O2 -flto"} } */

f(){asm("%0"::"r"(1.5F));}g(){asm("%0"::"r"(1.5));}
