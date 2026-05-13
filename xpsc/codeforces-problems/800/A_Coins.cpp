#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        if (k % 2 == 0)
        {
            if (n % 2 == 0)
                cout << "YES" << nl;
            else
                cout << "NO" << nl;
        }
        else
        {
            cout << "YES" << nl;
        }
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1814/A
*/
