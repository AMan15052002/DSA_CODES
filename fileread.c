#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    fp=fopen("abc.txt","r");
    if(fp==NULL)
    {
        printf("error");
        exit(1);

    }
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);

    }
    
    fclose(fp);
     






}