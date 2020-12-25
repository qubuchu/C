#include<stdio.h>
int mian () 
{
    int i,j,m,n,x;
    int a[6][6],b[6][6];
    scanf("%d%d",&m,&n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0 ;j < n;j++) {
            printf("%d",a[i][j]);
        } 
        printf("\n");
    }
}