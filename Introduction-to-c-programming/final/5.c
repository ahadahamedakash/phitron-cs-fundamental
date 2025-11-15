#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int aArr[n];

        int bArr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &aArr[i]);
            bArr[i] = aArr[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (bArr[i] > bArr[j])
                {
                    int temp = bArr[i];
                    bArr[i] = bArr[j];
                    bArr[j] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            int diff = aArr[i] - bArr[i];

            if (diff < 0)
            {
                diff = diff * (-1);
            }
            printf("%d ", diff);
        }

        printf("\n");
    }

    return 0;
}
