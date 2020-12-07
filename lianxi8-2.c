#include<stdio.h>
void f1(int x1,int x2,int *psum);
void f2(int x1,int x2,int *jian);
int main()
{
    int x1,x2,psum,jian;
    scanf("%d%d",&x1,&x2);
    f1(x1,x2,&psum);
    printf("%d\n",psum);
    f2(x1,x2,&jian);
    printf("%d\n",jian);
}
void f1(int x1,int x2,int *psum)
{
    *psum=x1+x2;
}
void f2(int x1,int x2,int *jian)
{
    *jian=x1-x2;
}