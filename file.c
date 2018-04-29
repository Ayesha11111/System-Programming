#include<unistd.h>
#include<sys/syscall.h>
#include<sys/types.h>
#include<stdio.h>
int main(int argc,char **argv,char **env) {
    FILE *fp;
    fp = fopen ("writefile1.txt","w");
    if (fp == NULL) {
        printf ("File not created  ");
        return 1;
    }
     printf("\nNAME : AYESHA FAROOQ DAR\n");
      printf("\nROLL NUM : BCS-F15-39\n\n");
     fprintf (fp, "process id is : %d\n\n" , getpid());
     fprintf(fp,"\nThread id : %ld\n\n", syscall(SYS_gettid));
     while(*env)
   {
   	
  	 fprintf(fp,"ENV Variables Are :: %s\n\n", *env++);
  }
     fclose (fp);
     printf ("\n\n\nFile  created okay :\n\n\n");
    return 0;
}