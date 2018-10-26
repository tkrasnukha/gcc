/* { dg-skip-if "Clang doesn't support inline asm for ARC yet" { arc-*-*  && is_clang } {"*"} {"-O2 -flto"} } */

static inline void 
bar (const int * const x) 
{ 
  __asm__ __volatile__ (""::"m" (*x)); 
} 
 
static const int y[1]; 
 
void 
foo (void) 
{ 
  bar (y); 
} 
