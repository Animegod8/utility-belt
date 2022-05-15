#include <stdio.h>
#include "src/calculator.c"
#include "src/excshell.c"

void prompt(){
  int choice;
  printf("1: Calculator\n 2: shell\n 3: info\n ");
  printf("What Do you want to do(1, 2, 3): ");
  scanf("%d", &choice);
  if(choice == 1){
    calculate();
  } else if (choice == 2){
    commandPrompt();
  }
}


int main(){
  prompt();
  return 0;
}