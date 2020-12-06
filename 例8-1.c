#include<stdio.h>
int main()
{
    int x=5342;
    int *p=NULL;
    p=&x;
    printf("if i know the name of the variable,i can get it`s value by name:%d\n",x);
    printf("if i know the address variable is:%x,then i also can get it`s value by address:%d\n",&p,*p);
    return 0;
}