#include<unistd.h>
#include<sys/syscall.h>
#include<sys/types.h>
#include<stdio.h>
int main(int argc,char **argv,char **env)
{ 
FILE *fp;


fp=fopen("writefile12.txt","w");      //open file for writing
if(fp==NULL)
{
printf("File is not created  \n");
return 0;
}
  printf("writing to File ::: \n\n\n\n");
 printf("Thread id: %ld\n", syscall(SYS_gettid));
fprintf(fp,"Thread id is :%ld\n", syscall(SYS_gettid));
printf("process id :%d\n",getpid());
fprintf(fp,"my process id is: %d\n",getpid()); 
  while(*env)
   {
   	 printf("Env variables are : %s \n",*env++);
  	 fprintf(fp,"%s\n", *env++);
  	 
  }

fclose(fp);
return 0;  
   }          
           


 
 
 

