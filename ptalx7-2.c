#include<stdio.h>
int main() 
{
    int i,a[10],b[10],n;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) {
        b[i]=a[n-i-1];
    }
    for(i=0;i<n-1;i++)  {
        printf("%d ",b[i]);
    }
    printf("%d",b[n-1]);
    return 0;
}