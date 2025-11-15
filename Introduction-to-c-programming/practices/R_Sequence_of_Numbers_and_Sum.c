#include <stdio.h>

int MIN(int a, int b)
{
    if (a < b)
        return a;
    return b;
}

int MAX(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    int A, B;

    while (scanf("%d %d", &A, &B) == 2)
    {
        int sum = 0;

        if (A > 0 && B > 0)
        {
            for (int i = MIN(A, B); i <= MAX(A, B); i++)
            {
                printf("%d ", i);
                sum += i;
            }
            printf("sum =%d\n", sum);
        }
        else
        {
            break;
        }
    }

    return 0;
}
