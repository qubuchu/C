#include<stdio.h>
void b(int *a);
int f(int x,int *a,int n);
int main()
{
    int i,a[10],x,flag;
    printf("Enter a shuzhu\n");
    for(i = 0;i < 10;i++) {
        scanf("%d",&a[i]);
    }
    b(a);
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
    printf("\n");
    printf("Enter a x:");
    scanf("%d",&x);
    flag=f(x,a,10);
    if(flag>=0)
    printf("index is %d\n",x);
    else
    printf("not found\n");
    return 0;
}

void b(int *a)
{
    int i,j,t;
    for(i=1;i<10;i++)
    for(j=10;j>=i;j--)
    {
        if(a[j]<a[j-1])
        t=a[j],a[j]=a[j-1],a[j-1]=t;
    }
} 


int f(int x, int *a, int n)
{
    int low,high,mid;
    low=0;high=n-1;
    while(low<=high) {
    mid=(low+high)/2;
    if(x==a[mid])
    break;
    else if(x < a[mid])
    high=mid-1;
    else
    low=mid+1;    
    }
    if(low<=high)
    return mid;
    else
    {
        return -1;
    }
}