#include <stdio.h>

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    int hasLucky = 0;

    for (int i = x; i <= y; i++)
    {
        int temp = i;
        int isLucky = 1;

        while (temp > 0)
        {
            int lastDigit = temp % 10;

            if (lastDigit != 4 && lastDigit != 7)
            {
                isLucky = 0;
                break;
            }

            temp /= 10;
        }

        if (isLucky)
        {
            printf("%d ", i);
            hasLucky = 1;
        }
    }

    if (hasLucky == 0)
    {
        printf("%d", -1);
    }

    return 0;
}
