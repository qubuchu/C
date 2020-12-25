#include<stdio.h>
int main () 
{
    int n,i,j,a[10][10],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
        scanf("%d",&a[i][j]); 
        if((i+j+2)!=n+1&&i!=n-1&&j!=n-1)
        sum+=a[i][j];   
        }
    }
    printf("%d",sum);
}