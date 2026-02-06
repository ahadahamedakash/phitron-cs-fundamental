#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long first = LLONG_MIN;
    long long second = LLONG_MIN;
    long long third = LLONG_MIN;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;

        if (x > first)
        {
            third = second;
            second = first;
            first = x;
        }
        else if (x < first && x > second)
        {
            third = second;
            second = x;
        }
        else if (x < second && x > third)
        {
            third = x;
        }
    }

    if (third == LLONG_MIN)
    {
        cout << -1;
    }
    else
    {
        cout << "Largest: " << first << endl;
        cout << "Second Largest: " << second << endl;
        cout << "Third Largest: " << third << endl;
    }

    return 0;
}
