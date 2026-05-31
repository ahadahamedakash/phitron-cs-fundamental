#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        vector<int> bits(32);

        int ans = (1LL << 31) - 1;

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            ans &= v[i];

            for (int j = 0; j < 32; ++j)
                if (v[i] & (1 << j))
                    bits[j]++;
        }

        for (int i = 30; i >= 0; --i)
        {
            if (k >= n - bits[i])
            {
                ans |= (1 << i);
                k -= (n - bits[i]);
            }
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1669/H
*/
