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

vector<int> getLongestSeq(const vector<int> &v, int mx)
{
    vector<int> longest(mx + 1, 0);

    int cnt = 1;
    int sz = v.size();

    for (int i = 1; i < sz; ++i)
    {
        if (v[i] == v[i - 1])
            cnt++;
        else
        {
            longest[v[i - 1]] = max(longest[v[i - 1]], cnt);
            cnt = 1;
        }
    }

    longest[v.back()] = max(longest[v.back()], cnt);

    return longest;
}

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int &i : a)
            cin >> i;
        for (int &j : b)
            cin >> j;

        auto longestInA = getLongestSeq(a, 2 * n);
        auto longestInB = getLongestSeq(b, 2 * n);

        int ans = 0;
        for (int i = 0; i <= n * 2; ++i)
            ans = max(ans, longestInA[i] + longestInB[i]);

        cout << ans << nl;
    }

    return 0;
}

/*
    link: https://codeforces.com/problemset/problem/1831/B
*/

/*
int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (ll &i : a)
            cin >> i;
        for (ll &j : b)
            cin >> j;

        ll cnt = 1;
        vector<ll> longestInA(2 * n + 1, 0);
        vector<ll> longestInB(2 * n + 1, 0);
        for (int i = 1; i < n; ++i)
        {
            if (a[i] == a[i - 1])
            {
                cnt++;
            }
            else
            {
                longestInA[a[i - 1]] = max(longestInA[a[i - 1]], cnt);
                cnt = 1;
            }
        }
        longestInA[a[n - 1]] = max(longestInA[a[n - 1]], cnt);

        cnt = 1;
        for (int i = 1; i < n; ++i)
        {
            if (b[i] == b[i - 1])
            {
                cnt++;
            }
            else
            {
                longestInB[b[i - 1]] = max(longestInB[b[i - 1]], cnt);
                cnt = 1;
            }
        }
        longestInB[b[n - 1]] = max(longestInB[b[n - 1]], cnt);

        ll ans = -1;
        for (int i = 0; i < n * 2; ++i)
        {
            ans = max(ans, longestInA[i] + longestInB[i]);
        }

        cout << ans << nl;
    }

    return 0;
}
*/
