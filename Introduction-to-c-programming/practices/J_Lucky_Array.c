#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    int minNum = INT_MAX;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] < minNum)
        {
            minNum = arr[i];
            count = 1;
        }
        else if (arr[i] == minNum)
        {
            count++;
        }
    }

    if (count % 2 != 0)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }

    return 0;
}
