#include<stdio.h>
int main()
{
    int a=3,*p;
    p=&a;
    printf("a=%d, *p=%d\n",a,*p);
    *p=10;
    printf("a=%d,*p=%d\n",a,*p);
    printf("enter a:");
    scanf("%d",&a);
    printf("a=%d,*P=%d\n",a,*p);
    (*p)++;
    printf("a=%d,*p=%d\n",a,*p);
    return 0;
}