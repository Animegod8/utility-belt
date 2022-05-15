#include <stdio.h>
#include "src/calculator.c"

void prompt(){
  char* choice;
  printf("Calculator\n shell\n info\n ");
  printf("What Do you want to do: ");
  scanf("%s", choice);
  if(choice == "Calculator"){
    calculate();
  }  
}


int main(){
  prompt();
  return 0;
}