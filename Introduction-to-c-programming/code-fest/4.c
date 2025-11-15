#include <stdio.h>

int main()
{
    long long int n;

    scanf("%lld", &n);
    char number[n];

    scanf("%s", number);

    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int digit = number[i] - '0';
        sum += digit;
        }

    if (sum % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
