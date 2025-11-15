#include <stdio.h>

int main()
{
    long long int x, y, z;
    scanf("%lld %lld %lld", &x, &y, &z);

    if (x % z == 0 && y % z == 0)
    {
        printf("Both");
    }
    else if (x % z == 0 && y % z != 0)
    {
        printf("Memo");
    }
    else if (y % z == 0 && x % z != 0)
    {
        printf("Momo");
    }
    else
    {
        printf("No One");
    }

    return 0;
}
