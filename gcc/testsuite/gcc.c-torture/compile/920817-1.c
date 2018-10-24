/* { dg-options "-Wno-return-type -Wno-implicit-int" } */

int v;static inline f(){return 0;}g(){return f();}void h(){return v++;}
