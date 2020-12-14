#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char sx[80],smin[80];
    gets(sx);
    strcpy(smin,sx);
    i=strlen(smin);
    for(j=1;j<=5;j++) {
        gets(sx);
        if(strlen(sx)<=strlen(smin)) {
            strcpy(smin,sx);
        }
    }
    puts(smin);
}