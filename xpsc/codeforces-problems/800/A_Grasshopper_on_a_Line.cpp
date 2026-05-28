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
        ll n, k;
        cin >> n >> k;

        if (n % k != 0)
        {
            cout << 1 << nl;
            cout << n << nl;
        }
        else
        {
            cout << 2 << nl;
            cout << n - 1 << " " << 1 << nl;
        }
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1837/A
*/
