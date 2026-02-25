#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int val;

        int freq[21] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            freq[val]++;
        }

        int pairs = 0;

        for (int i = 1; i <= 20; i++)
            if (freq[i] > 1)
                pairs += freq[i] / 2;

        cout << pairs << endl;
    }

    return 0;
}

/*
INPUT:
    5
    1
    1
    2
    2 2
    2
    1 2
    4
    1 2 3 1
    6
    1 2 3 1 2 3
*/
