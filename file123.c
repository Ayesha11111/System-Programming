#include<unistd.h>
#include<sys/syscall.h>
#include<sys/types.h>
#include<stdio.h>

int main (int argc,char *argv[]) 
{ 
FILE *fp;


fpt=fopen("writefile234.txt","w");      
if(fp==NULL)
{
printf("Unable to open!!!!!!!!!! /n");
return 0;
}
printf("Ayesha Farooq Dar:\n");
printf("bcs-f15-39(m)\n");
printf("process id is :   %d\n",getpid());   
fprintf(fp,"The process id is: %d\n",getpid());  
printf(" environment variable pAATH :: %d \n",getenv("PATH"));  
fprintf(fp," eNV VARIABLE Path is =%d\n",getenv("PATH"));
printf(" Thread id is: %d\n", syscall(SYS_gettid));  
fprintf(fpt,"Thread id is :%d\n", syscall(SYS_gettid));
fclose(fp);
return 0;  
   }          
           
 
 
 
 
