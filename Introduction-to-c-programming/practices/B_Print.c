#include <stdio.h>

void print()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("%d", i);
        }
        else
        {
            printf(" %d", i);
        }
    }
}

int main()
{

    print();

    return 0;
}
