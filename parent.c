#include<unistd.h>
#include<sys/syscall.h>
#include<sys/types.h>
#include<stdio.h>

int main(int argc,char *argv[])

{

  printf("\n Fork is strange system call because one process(orignal) call is,but two process(the orignal and its child) return from it,However,the parent and child have different Pid num and PPId num : %ld\n", syscall(SYS_fork));
  return 0;
}