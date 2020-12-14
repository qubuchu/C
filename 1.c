#include <stdio.h>
int main()
{
    int cnt = 0, quit = 0, i = 0,n = 10,a[10],m,flag = 0;
    scanf("%d",&m);
    //n players
    //m the number to exit
    for(i=0;i<10;i++)
    a[i]=i+1;
    //1 exited    0 ingame
    for (i = 0;; i++)
    {
        if (i == n)
        {
            i = 0;
        }
        if (a[i] >= 0)
        {
            cnt++;
            if (cnt % m == 0)
            {
                //To be exited
                quit++;
                printf("%d ",a[i]);
                a[i]=-1;
            }
            if (quit == n-1)
            {
                break;
            }
        }
    }
}
