#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        sort(all(v));

        int i = 0, j = n - 1;
        ll ans = 0;
        while (i < j)
        {
            ans += v[j--];
            ans -= k;
            if (v[i] - k < 0)
            {
                i++;
            }
        }

        if (i == j)
        {
            ans += v[i];
            ans -= k;
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    https://codeforces.com/contest/2245/problem/B
*/
