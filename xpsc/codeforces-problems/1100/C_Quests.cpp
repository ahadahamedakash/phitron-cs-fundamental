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
        vector<int> a(n), b(n);

        for (int &i : a)
            cin >> i;
        for (int &i : b)
            cin >> i;

        int total = 0, maxi = 0, ans = 0;
        for (int i = 0; i < min(n, k); ++i)
        {

            total += a[i];
            maxi = max(maxi, b[i]);
            ans = max(ans, total + (k - i - 1) * maxi);
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1914/C
*/
