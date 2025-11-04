#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int copyNum = i;
        int digitSum = 0;
        while (copyNum > 0)
        {
            int digit = copyNum % 10;
            digitSum += digit;
            copyNum /= 10;
        }

        if (digitSum >= a && digitSum <= b)
        {
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}
