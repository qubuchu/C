#include <stdio.h>
#define MAXN 20

void CountOff(int n, int m, int out[]);

int main()
{
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff(n, m, out);
    for (i = 0; i < n; i++)
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
void CountOff(int n, int m, int out[])
{
    int cnt = 0, quit = 0, i = 0;
    //n players
    //m the number to exit
    int exit[MAXN] = {0};
    //1 exited    0 ingame
    for (i = 0;; i++)
    {
        if (i == n)
        {
            i = 0;
        }
        if (exit[i] == 0)
        {
            cnt++;
            if (cnt % m == 0)
            {
                //To be exited
                quit++;
                exit[i]++;
                *(out + i) = quit;
            }
            if (quit == n)
            {
                break;
            }
        }
    }
}
