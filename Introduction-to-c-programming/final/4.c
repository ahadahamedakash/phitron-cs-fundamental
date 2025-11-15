#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int lineInStar = n / 2 + 6;

    if (n % 2 != 0)
    {
        int star = 1;
        int space = lineInStar - 1;

        for (int i = 0; i < lineInStar; i++)
        {
            for (int k = space; k > 0; k--)
            {
                printf(" ");
            }
            for (int j = 0; j < star; j++)
            {
                printf("*");
            }
            printf("\n");
            star += 2;
            space--;
        }

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                printf(" ");
            }
            for (int k = 0; k < n; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
