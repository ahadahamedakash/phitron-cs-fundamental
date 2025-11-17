#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int sumOfPrimaryDiagonal = 0;
    int sumOfSecondaryDiagonal = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sumOfPrimaryDiagonal += arr[i][j];
            }
            if (i + j == n - 1)
            {
                sumOfSecondaryDiagonal += arr[i][j];
            }
        }
    }

    int dif = sumOfPrimaryDiagonal - sumOfSecondaryDiagonal;

    if (dif < 0)
    {
        printf("%d", dif * (-1));
    }
    else
    {
        printf("%d", dif);
    }

    return 0;
}
