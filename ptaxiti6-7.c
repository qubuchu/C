#include<stdio.h>
int main()
{
    int a,b;
    char c;
    scanf("%d",&a);
    while(1) {
        scanf("%c",&c);
        switch(c) {
        case '+':
            scanf("%d", &b);
            a = a + b;
            break;
        case '-':
            scanf("%d", &b);
            a = a - b;
            break;
        case '*':
            scanf("%d", &b);
            a = a * b;
            break;
        case '/':
            scanf("%d", &b);
            if(b != 0)
            a = a / b;
            else
            {
                printf("ERROR");
                return 0;
            }
            break;
        case '=':
            printf("%d", a);
            return 0;
        default:
            printf("ERROR");
            return 0;
        }
    }
}