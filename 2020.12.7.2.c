#include <stdio.h>
#define MAXS 15

void StringCount(char *s);
void ReadString(char *s); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */
void StringCount(char *s)
{
    int i= 0,zm = 0, kg = 0, sz = 0, qt = 0, xxzm = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            zm++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            xxzm++;
        else if (s[i] == ' ')
            kg++;
        else if (s[i] >= '0' && s[i] <= '9')
            sz++;
        else
            qt++;
        i++;
    }
    printf("%d %d %d %d %d", zm, xxzm, kg, sz, qt);
}
void ReadString(char *s)
{
    gets(s);
}