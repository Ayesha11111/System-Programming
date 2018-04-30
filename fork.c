#include<unistd.h>
#include<sys/syscall.h>
#include<sys/types.h>
#include<stdio.h>

int main(int argc,char *argv[])

{

  printf("\n Fork is strange system call because one process(orignal) calls it,\n");
  printf("but two process(the orignal and its child) return from it,\n");
  printf("However,the parent and child have different Pid num: \n");
  printf("\n Fork system call : %ld\n", syscall(SYS_fork));
  return 0;
}