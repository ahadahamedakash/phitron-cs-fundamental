#include <stdio.h>
#include <string.h>

int is_palindrome(char arr[], int length)
{
    int value = 1;

    int first = 0;
    int last = length - 1;

    while (first < last)
    {
        if (arr[first] != arr[last])
        {
            value = 0;
            break;
        }

        first++;
        last--;
    }

    return value;
}

int main()
{
    char arr[10001];

    scanf("%s", arr);

    int length = strlen(arr);

    int value = is_palindrome(arr, length);

    if (value == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}
