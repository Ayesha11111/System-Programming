#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    FILE  *fp;

    char ch;
   fp = fopen ("writefile1.txt","r");
    if(fp == NULL)
    {
    
        printf("File doesnot exits! \n\n");
        exit(1);
    }

    printf("Data from file::::!!\n\n");

    do 
    {
        ch = fgetc(fp);
        putchar(ch);

    } 
        while(ch != EOF);
        fclose(fp);
 return 0;
     }
