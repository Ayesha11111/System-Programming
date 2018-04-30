#include<unistd.h>
#include<sys/syscall.h>
#include<sys/types.h>
#include<stdio.h>

int main(int argc,char *argv[])

{

  printf("\n Parent Process id : %ld\n", syscall(SYS_getppid));
}