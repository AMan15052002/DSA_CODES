#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char str[30];
    fp=fopen("abc.txt","w+");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }

    fputs("viit  pune",fp);
    fclose(fp);
}