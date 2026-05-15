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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        bool isPossible = true;

        for (int i = 0; i < n; ++i)
        {
            int allZero = 1, one = 0;
            for (int j = max(0LL, i - k); j <= min(n - 1, i + k); ++j)
            {
                if (i == j)
                    continue;
                if (v[j] == 1)
                {
                    allZero = 0;
                    one = 1;
                }
            }

            isPossible = (v[i] == 1 && allZero) || (v[i] == 0 && one);
            if (!isPossible)
                break;
        }

        cout << (isPossible ? "YES" : "NO") << nl;
    }

    return 0;
}

/*
    LINK: https://www.codechef.com/problems/SETSK
*/
