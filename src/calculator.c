#include <stdio.h>


void calculate(){
  char op;
  double a, b, c;
  printf("type a number: ");
  scanf("%lf", &a);
  printf("type another number: ");
  scanf("%lf", &b);
  printf("type a operator: ");
  scanf("%c", &op);

  switch(op){
    case '+':
      c = a + b;
      printf("%f + %f = %f", a, b, c);
  }
}