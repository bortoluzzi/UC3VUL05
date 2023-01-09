#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
  char buffer[14];
  printf("Copying %s to the buffer\n", argv[1]);
  strcpy(buffer,argv[1]);
  printf("Have you got 'segmentation fault'?\n");
}
