#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

bool isPossible(int d, int p, vector<int> &v)
{
    ll people = 0;

    for (int val : v)
    {
        people += val / d;
        if (people >= p)
            return true;
    }

    return false;
}

int main()
{
    fastIO();

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mx = max(mx, v[i]);
    }

    int start = 1, end = mx, ans = 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isPossible(mid, m, v))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << ans << nl;

    return 0;
}

/*
    LINK: https://www.codechef.com/problems/FOODRES
*/
