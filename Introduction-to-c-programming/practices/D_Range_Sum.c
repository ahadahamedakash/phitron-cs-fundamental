#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        long long int a, b;
        scanf("%lld %lld", &a, &b);

        long long int sum1, sum2;

        if (a < b)
        {
            sum1 = ((a - 1) * a) / 2;
            sum2 = (b * (b + 1)) / 2;
        }
        else if (a > b)
        {
            sum1 = ((b - 1) * b) / 2;
            sum2 = (a * (a + 1)) / 2;
        }

        printf("%lld\n", sum2 - sum1);
    }

    return 0;
}
