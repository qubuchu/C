#include <stdio.h>
int main()
{
    char s[80];
    int c = 0, i = 0;
    gets(s);
    while (s[i] != '\0')
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
        {
            c++;
            while (s[i] != ' ' && s[i] != '\0')
            {
                i++;
            }
        }
        i++;
    }
    printf("%d", c);
    return 0;