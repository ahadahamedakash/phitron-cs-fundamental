#include <stdio.h>

void rec(int n)
{
    if (n <= 0)
        return;

    if (n == 1)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d ", n);
    }

    rec(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    rec(n);

    return 0;
}
