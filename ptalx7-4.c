#include <stdio.h>
int main()
{
    int c[60], i, n1, x = 0, n2, j, t = 0, a[30], b[30],d[40];
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
                t = 1;
        }
        if (t != 1)
        {
            c[x] = a[i];
            x++;
        }
        t = 0;
    }
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n1; j++)
        {
            if (b[i] == a[j])
                t = 1;
        }
        if (t != 1)
        {
            c[x] = b[i];
            x++;
        }
        t = 0;
    }
    for (i = 0; i < x-1; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (c[i] == c[j]&&j!=i)
                t = 1;
        }
        if (t == 0)
        printf("%d ", c[i]);
        t = 0;
    }
    printf("%d",c[x-1]);
    return 0;
}