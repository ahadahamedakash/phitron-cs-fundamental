#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int dash = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            printf(" ");
        }

        if (i % 2 != 0)
        {
            for (int j = dash; j > 0; j--)
            {
                printf("#");
            }
        }
        else
        {
            for (int j = dash; j > 0; j--)
            {
                printf("-");
            }
        }

        dash += 2;
        printf("\n");
    }

    int space = 1;

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int j = i * 2 - 1; j > 0; j--)
        {

            if (i % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        space++;
        printf("\n");
    }

    return 0;
}
