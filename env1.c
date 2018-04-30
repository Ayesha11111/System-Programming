#include<unistd.h>
#include<sys/syscall.h>
#include<sys/types.h>
#include<stdio.h>

int main(int argc,char *argv[])

{


  printf("\n ID : %ld\n", syscall(SYS_setup));
  return 0;
}