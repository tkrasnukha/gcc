/* { dg-additional-options "-fbracket-depth=1000 -DLIM=LIM3 -DRBR=RBR3" { target { is_clang } } } */

#define LIM1(x) x##0 {x##1 {x##2 {x##3 {x##4 {x##5 {x##6 {x##7 {x##8 {x##9 {
#define LIM2(x) LIM1(x##0) LIM1(x##1) LIM1(x##2) LIM1(x##3) LIM1(x##4) \
		LIM1(x##5) LIM1(x##6) LIM1(x##7) LIM1(x##8) LIM1(x##9)
#define LIM3(x) LIM2(x##0) LIM2(x##1) LIM2(x##2) LIM2(x##3) LIM2(x##4) \
		LIM2(x##5) LIM2(x##6) LIM2(x##7) LIM2(x##8) LIM2(x##9)
#define LIM4(x) LIM3(x##0) LIM3(x##1) LIM3(x##2) LIM3(x##3) LIM3(x##4) \
		LIM3(x##5) LIM3(x##6) LIM3(x##7) LIM3(x##8) LIM3(x##9)
#define LIM5(x) LIM4(x##0) LIM4(x##1) LIM4(x##2) LIM4(x##3) LIM4(x##4) \
		LIM4(x##5) LIM4(x##6) LIM4(x##7) LIM4(x##8) LIM4(x##9)
#define LIM6(x) LIM5(x##0) LIM5(x##1) LIM5(x##2) LIM5(x##3) LIM5(x##4) \
		LIM5(x##5) LIM5(x##6) LIM5(x##7) LIM5(x##8) LIM5(x##9)
#define LIM7(x) LIM6(x##0) LIM6(x##1) LIM6(x##2) LIM6(x##3) LIM6(x##4) \
		LIM6(x##5) LIM6(x##6) LIM6(x##7) LIM6(x##8) LIM6(x##9)

#define RBR1 } x; } x; } x; } x; } x; } x; } x; } x; } x; } x;
#define RBR2 RBR1 RBR1 RBR1 RBR1 RBR1 RBR1 RBR1 RBR1 RBR1 RBR1
#define RBR3 RBR2 RBR2 RBR2 RBR2 RBR2 RBR2 RBR2 RBR2 RBR2 RBR2
#define RBR4 RBR3 RBR3 RBR3 RBR3 RBR3 RBR3 RBR3 RBR3 RBR3 RBR3
#define RBR5 RBR4 RBR4 RBR4 RBR4 RBR4 RBR4 RBR4 RBR4 RBR4 RBR4

#ifndef LIM
  #define LIM LIM4
#endif

#ifndef RBR
  #define RBR RBR4
#endif

LIM(struct s)
  int x;
RBR  
