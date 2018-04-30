#include<unistd.h>
#include<sys/syscall.h>
#include<sys/types.h>
#include<stdio.h>

int main(int argc,char *argv[])

{
  printf("\nNAME : AYESHA FAROOQ DAR\n");
  printf("\nROLL NUM : BCS-F15-39\n");
  printf("\nThread id : %ld\n", syscall(SYS_gettid));
}