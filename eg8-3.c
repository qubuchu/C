#include<stdio.h>
void swap1(int x,int y);
void swap2(int *px,int *py);
void swap3(int *px,int *py);
int main()
{
    int x=10,y=20;
    int *px=&x,*py=&y;
    swap1(x,y);
    printf("x=%d,y=%d\n",x,y);
    x=10,y=20;
    swap2(px,py);
    printf("x=%d,y=%d\n",x,y);
    x=10,y=20;
    printf("x=%d,y=%d\n",px,py);
    swap3(px,py);
    printf("x=%d,y=%d\n",px,py);
    printf("x=%d,y=%d\n",x,y);
    return 0;
}
void swap1(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
void swap2(int *px,int *py)
{
    int t;
    t=*px;
    *px=*py;
    *py=t;
}
void swap3(int *px,int *py)
{
    int *pt;
    pt=px;
    px=py;
    py=pt;
}