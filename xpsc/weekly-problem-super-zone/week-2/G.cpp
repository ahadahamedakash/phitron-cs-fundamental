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

    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n / 2 << nl;
        for (int i = 0; i < n / 2; ++i)
            cout << 2 << spc;

        cout << nl;
    }
    else
    {
        cout << (n - 3) / 2 + 1 << nl;

        for (int i = 0; i < (n - 3) / 2; ++i)
            cout << 2 << spc;
        cout << 3 << nl;
    }

    return 0;
}
