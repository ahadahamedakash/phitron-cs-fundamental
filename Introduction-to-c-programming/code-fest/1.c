#include <stdio.h>
#include <string.h>

int main()
{
    char a[1005], b[1005];

    int x, y;

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    scanf("%d %d", &x, &y);

    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    printf("%s", a);

    for (int i = x; i <= y; i++)
    {
        if (i < strlen(b))
        {
            printf("%c", b[i]);
        }
    }

    return 0;
}
