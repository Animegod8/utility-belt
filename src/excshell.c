#include <stdio.h>
#include <stdlib.h>



int system(const char* command);

void commandPrompt(){
  char* cmd;
  printf("Type a shell command here: ");
  scanf("%s", cmd);
  //system(/*insert command here*/);
}