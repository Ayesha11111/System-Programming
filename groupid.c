#include<unistd.h>
#include<sys/syscall.h>
#include<sys/types.h>
#include<stdio.h>

int main(int argc,char *argv[])

{


  printf("\nReal Group ID Of current process : %ld\n", syscall(SYS_getgid));
  return 0;
}