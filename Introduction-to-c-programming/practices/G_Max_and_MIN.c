#include <stdio.h>
#include <limits.h>

int minMax()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    int maxNum = INT_MIN;
    int minNumber = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] < minNumber)
        {
            minNumber = arr[i];
        }

        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
    }

    printf("%d %d", minNumber, maxNum);

    return 0;
}

int main()
{
    minMax();

    return 0;
}