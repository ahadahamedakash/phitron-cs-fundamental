#include <stdio.h>
#include <math.h>

int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long double left = (long double)b * logl((long double)a);

    long double right = (long double)d * logl((long double)c);

    // long long int x = 1, y = 1;

    // for (int i = 0; i < b; i++)
    // {
    //     x *= a;
    // }

    // for (int i = 0; i < d; i++)
    // {
    //     y *= c;
    // }

    if (left > right)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    // printf("%s\n", left > right ? "YES" : "NO");

    return 0;
}
