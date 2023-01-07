#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp=NULL;
    char str[30];
    fp=fopen("abc.txt","a");

    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }

    printf("enter theb content u want to append: ");
    gets(str);

    fputs(str,fp);
    printf("\n successfully appended");
    fclose(fp);






}