#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arrOne[n], arrTwo[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrOne[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrTwo[i]);
    }

    int start = 0;
    int end = n - 1;

    while (start < n)
    {
        int sum = arrOne[start] + arrTwo[end];

        printf("%d ", sum);

        start++, end--;
    }

    return 0;
}
