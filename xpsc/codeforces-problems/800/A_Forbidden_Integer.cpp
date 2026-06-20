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
    cin >> t;

    while (t--)
    {

        ll n, k, x;
        cin >> n >> k >> x;

        if (x != 1)
        {
            yes;
            cout << n << nl;
            for (int i = 1; i <= n; ++i)
                cout << 1 << " ";

            cout << nl;
        }
        else
        {
            if (k == 1 || (k == 2 && n % 2 == 1))
                no;
            else
            {
                yes;
                if (n % 2 == 0)
                {
                    cout << n / 2 << nl;
                    for (int i = 1; i <= n / 2; ++i)
                        cout << 2 << " ";

                    cout << nl;
                }
                else
                {
                    cout << (n - 3) / 2 + 1 << nl;
                    for (int i = 1; i <= (n - 3) / 2; ++i)
                        cout << 2 << " ";

                    cout << 3 << nl;
                }
            }
        }
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1845/A
*/
