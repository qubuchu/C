#include<stdio.h>
#define N 10
int mian()
{
    int i;
    int a[N];
    double sum=0;
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]);
        sum+=a[i]/10.0;
    }
    printf("%.2f",sum);
    for(i=0;i<N;i++) {
        if(a[i]>sum)
        printf("%d",a[i]);
    }
    return 0;
}