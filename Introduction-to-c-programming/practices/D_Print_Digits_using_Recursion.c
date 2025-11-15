#include <stdio.h>

int rec(long long int num)
{
    if (num == 0)
    {
        return 0;
    }
    int lastDitit = num % 10;
    rec(num / 10);

    printf("%d ", lastDitit);

    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long int num;
        scanf("%lld", &num);

        if (num == 0)
        {
            printf("%d", 0);
        }
        else
        {
            rec(num);
        }

        printf("\n");
    }

    return 0;
}
