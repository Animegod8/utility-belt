#include <stdio.h>

#include "src/calculator.c"
#include "src/excshell.c"

void info(){
    FILE* ptr;
    char ch;
 
    // Opening file in reading mode
    ptr = fopen("info.txt", "r");
 
    if (NULL == ptr) {
        printf("file can't be opened, File an issue request at the github repo \n");
    }
 
    // Printing what is written in file
    // character by character using loop.
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
        // Checking if character is not EOF.
        // If it is EOF stop eading.
    } while (ch != EOF);
 
    // Closing the file
    fclose(ptr);
}



void prompt(){
  int choice;
  printf("1: Calculator\n 2: shell\n 3: info\n ");
  printf("What Do you want to do(1, 2, 3): ");
  scanf("%d", &choice);
  if(choice == 1){
    calculate();
    printf("\n");
  } else if (choice == 2){
    commandPrompt();
    printf("\n");
  } else {
    info();
    printf("\n");
  }
}


int main(){
  prompt();
  return 0;
}