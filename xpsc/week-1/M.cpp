#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n, o;
        string s;
        cin >> n >> o >> s;

        vector<int> freq(26, 0);

        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++;
        }

        int oddCnt = 0;
        for (int x : freq)
        {
            if (x % 2 != 0)
            {
                oddCnt++;
            }
        }

        if (oddCnt - 1 <= o)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}
