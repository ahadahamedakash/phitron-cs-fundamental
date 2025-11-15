#include <stdio.h>

int MIN(int x, int y)
{
    if (x > y)
        return y;
    return x;
}

int MAX(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int min = MIN(MIN(a, b), c);

    int max = MAX(MAX(a, b), c);

    int mid;

    if (a == min)
    {
        if (b == max)
        {
            mid = c;
        }
        else
        {
            mid = b;
        }
    }
    else if (b == min)
    {
        if (a == max)
        {
            mid = c;
        }
        else
        {
            mid = a;
        }
    }
    else if (c == min)
    {
        if (a == max)
        {
            mid = b;
        }
        else
        {
            mid = a;
        }
    }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d", min, mid, max, a, b, c);

    return 0;
}
