#include <stdio.h>
#include <stdlib.h>


int system(const char* command);

void commandPrompt(){
  system("echo type a command");
  system("read cmd; $cmd");
  //system("$cmd");
}