#include <stdio.h>

int main()
{
    int a, b, c;
    char s, q;

    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

    int res = 0;
    if (s == '+')
    {
        res = a + b;
    }
    else if (s == '-')
    {
        res = a - b;
    }
    else if (s == '*')
    {
        res = a * b;
    }

    if (res == c)
    {
        printf("Yes");
    }
    else
    {
        printf("%d", res);
    }

    return 0;
}
