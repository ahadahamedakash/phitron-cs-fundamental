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

bool helper(int mid, vector<ll> &v, int k)
{

    if (mid == 0)
        return true;

    vector<int> vis(mid, 0);
    int tSeg = 1, found = 0, seg = 0;
    for (auto val : v)
    {
        if (val >= mid)
            continue;

        if (vis[val] != tSeg)
        {
            vis[val] = tSeg;
            found++;
        }

        if (found == mid)
        {
            seg++;

            if (seg >= k)
                return true;

            tSeg++;
            found = 0;
        }
    }

    return false;
}

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        int lt = 0, rt = n, ans = 0;
        while (lt <= rt)
        {
            int mid = lt + (rt - lt) / 2;

            if (helper(mid, v, k))
            {
                ans = mid;
                lt = mid + 1;
            }
            else
            {
                rt = mid - 1;
            }
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    https://codeforces.com/problemset/problem/2093/E
*/
