#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp=NULL;
    fp=fopen("abc.txt","r+");

    if(fp==NULL)
    {
        printf("arror");
        exit(1);

    }

    fputs("amanguru",fp);

    fclose(fp);
}