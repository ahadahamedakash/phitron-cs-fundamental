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
        ll n;
        cin >> n;

        ll rem = n % 12;
        ll a;
        if (rem <= 9)
            a = rem;
        else if (rem == 10)
            a = 22;
        else
            a = 11;

        if (a > n)
            cout << -1 << nl;
        else
            cout << a << " " << n - a << nl;
    }

    return 0;
}
