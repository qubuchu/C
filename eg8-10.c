#include<stdio.h>
#include<string.h>
int main()
{
    int x;
    char str[80],a[80]="aab";
    /*scanf("%s",&str);
    printf("%s",str);
    printf("hello");*/
   
    gets(str);
    puts(str);
    //strcpy(str,a);
    //strcat(str,a);
    //strcat(str,"!");
    //x=strcmp(str,a);
    x=strlen(str);
    printf("%d",x);
    //printf("%s",str+1); 
    puts(str);
    return 0;
}