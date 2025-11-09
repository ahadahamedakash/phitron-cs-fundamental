#include <stdio.h>

void odd_even()
{
    int n;
    scanf("%d", &n);

    long long int arr[n];

    int oddCount = 0;
    int evenCount = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);

        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    printf("%d %d", evenCount, oddCount);
}

int main()
{
    odd_even();

    return 0;
}
