#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

        int firstSum = 0;
        int secondSum = 0;

        for (int i = 0; i < 6; i++)
        {

            if (i < 3)
            {
                int digit = x % 10;
                firstSum += digit;

                x /= 10;
            }
            else
            {
                int digit = x % 10;
                secondSum += digit;

                x /= 10;
            }
        }

        if (firstSum == secondSum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
