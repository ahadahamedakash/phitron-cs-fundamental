#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        long long int r, x, y, z;
        scanf("%lld %lld %lld %lld", &r, &x, &y, &z);

        long long int mul = x * y * z;

        if (r % mul != 0)
        {
            printf("%d\n", -1);
        }
        else
        {
            long long int res = r / mul;
            printf("%lld\n", res);
        }
    }

    return 0;
}
