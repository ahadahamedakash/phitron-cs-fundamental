#include <stdio.h>
#include <limits.h>
#include <string.h>

int main()
{
    char bOne[1001];
    char bTwo[1001];

    fgets(bOne, sizeof(bOne), stdin);
    fgets(bTwo, sizeof(bTwo), stdin);

    bOne[strcspn(bOne, "\n")] = '\0';
    bTwo[strcspn(bTwo, "\n")] = '\0';

    int flag = 1;

    int bOneCount = 0;
    for (int i = strlen(bOne); i >= 0; i--)
    {
        char temp = bOne[bOneCount];
        bOne[bOneCount] = bOne[i];
        bOne[i] = temp;

        bOneCount++;
    }

    int bTwoCount = 0;
    for (int i = strlen(bTwo); i >= 0; i--)
    {
        char temp = bTwo[bTwoCount];
        bTwo[bTwoCount] = bTwo[i];
        bTwo[i] = temp;

        bTwoCount++;
    }

    for (int i = 0; bOne[i] != ' '; i++)
    {
        if (bOne[i] != bTwo[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }

    return 0;
}