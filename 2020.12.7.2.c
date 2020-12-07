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
    int zm = 0, kg = 0, sz = 0, qt = 0, xxzm = 0;
    while (*S != '\0')
    {
        if (*s >= 'A' && *s <= 'Z')
            zm++;
        else if (*s >= 'a' && *s <= 'z')
            xxzm++;
        else if (*s == ' ')
            kg++;
        else if (*s >= '0' && *s <= '9')
            sz++;
        else
            qt++;
        s++;
    }
    printf("%d %d %d %d %d", zm, xxzm, kg, sz, qt);
}