#include <stdio.h>
char op;
double a, b, c;

void calculate(){
  printf("type a operator: ");
  scanf(" %c", &op);
  printf("type a number: ");
  scanf("%lf", &a);
  printf("type another number: ");
  scanf("%lf", &b);
  switch(op){
    case '+':
      c = a + b;
      printf("%lf + %lf = %lf\n", a, b, c);
    break;
    case '-':
      c = a - b;
      printf("%lf - %lf = %lf\n", a, b, c);
    break;  
    case '*':
      c = a * b;
      printf("%lf * %lf = %lf\n", a, b, c);
    break;
    case '/':
      c = a / b;
      printf("%lf / %lf = %lf\n", a, b, c);
    break;
  }
}