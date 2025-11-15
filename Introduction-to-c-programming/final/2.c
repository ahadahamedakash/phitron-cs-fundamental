#include <stdio.h>

int main()
{
    int r, c;

    scanf("%d %d", &r, &c);
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    if (r != c)
    {
        printf("NO");
        return 0;
    }

    int hasNonZeros = 0;

    int isDiagonalOne = 0;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    if (arr[i][j] != 1)
                    {
                        isDiagonalOne = 1;
                    }
                }
                else if (i + j == r - 1)
                {
                    if (arr[i][j] != 1)
                    {
                        isDiagonalOne = 1;
                    }
                }
                else
                {
                    if (arr[i][j] != 0)
                    {
                        hasNonZeros = 1;
                    }
                }
            }
        }
    }

    if (hasNonZeros == 0 && isDiagonalOne == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
