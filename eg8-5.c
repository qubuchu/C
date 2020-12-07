#include<stdio.h>
#define N 8
void f(int a[],int n);

int main()
{
    int a[N],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (i = 0; i < n; i++)
    printf("%d",a[i]);
    printf("\n");
    f(a, n);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}
void f(int a[],int n)
//void f(int *a,int n)
{
    int i,t,j;
    for(i=0;i<n-1;i++)
    for(j=n-1;j>i;j--)
    if(a[j]<=a[j-1])
    {
    t=a[j];
    a[j]=a[j-1];
    a[j-1]=t;
    }
}