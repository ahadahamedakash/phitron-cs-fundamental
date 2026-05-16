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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int zeroCnt = 0, oneCnt = 0;
        for (char ch : s)
        {
            if (ch == '0')
                zeroCnt++;
            else
                oneCnt++;
        }

        int needBadPair = n / 2 - k;

        zeroCnt -= needBadPair;
        oneCnt -= needBadPair;

        if (zeroCnt < 0 || oneCnt < 0)
        {
            cout << "NO" << nl;
            continue;
        }

        int hasGoodPair = (zeroCnt / 2) + (oneCnt / 2);

        if (hasGoodPair == k)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}
