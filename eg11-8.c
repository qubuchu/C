#include<stdio.h>
char *match(char *s,char ch);
int main() 
{
    char ch,str[80],*p=NULL;
    printf("输入一个字符串:");
    gets(str);
    //fflush(stdin);
    //scanf("%s",str);
    //getchar();
    ch=getchar();
    if((p = match (str,ch)) != NULL) 
    printf("%s\n",p);
    else
    printf("Not Found!\n");
    return 0;
}

char *match(char *p,char ch)
{
    while(*p != '\0')
    if(*p == ch)
    return (p);
    else 
    p++;
    return (NULL);
}