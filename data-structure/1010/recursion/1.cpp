#include <bits/stdc++.h>

using namespace std;

void printNums(int n)
{
    if (n == 1)
    {
        cout << "1 ";
        return;
    }

    cout << n << " ";
    printNums(n - 1);
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + sum(n - 1);
}

int main()
{
    // printNums(50);

    // int res = factorial(4);

    // cout << res;

    cout << sum(10);

    return 0;
}
