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
        int n;
        cin >> n;
        vector<int> v(n);

        for (int &i : v)
            cin >> i;

        int k = abs(v[0] - 1);

        for (int i = 1; i < n; ++i)
            k = gcd(k, abs(v[i] - (i + 1)));

        cout << k << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1828/B
*/
