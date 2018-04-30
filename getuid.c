#include<unistd.h>
#include<sys/syscall.h>
#include<sys/types.h>
#include<stdio.h>

int main(int argc,char *argv[])

{


  printf("\n User ID : %ld\n", syscall(SYS_getuid));
  return 0;
}