#include <stdio.h>

int main()
{
    int x, y;
    char s;

    scanf("%d %c %d", &x, &s, &y);

    if (s == '<')
    {
        if (x < y)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    else if (s == '>')
    {
        if (x > y)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    else if (s == '=')
    {
        if (x == y)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }

    return 0;
}
