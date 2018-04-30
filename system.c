#define _GNU_SOURCE
#include<unistd.h>
#include<sys/syscall.h>
#include<sys/types.h>
#include<stdio.h>
int main(int argc,char *argv[])
{
printf("Thread id : %d\n", syscall(SYS_getid));
return0;
}