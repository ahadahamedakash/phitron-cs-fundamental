#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define ld long double
#define ll long long int
#define no cout << "No\n"
#define yes cout << "Yes\n"
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n), b(n);
        for (ll &i : a)
            cin >> i;
        for (ll &j : b)
            cin >> j;

        bool isPoss = true;

        for (ll i = 0; i < n - 1; ++i)
        {
            if (a[i] < a[i + 1] && b[i] > b[i + 1])
                isPoss = false;
            if (a[i] > a[i + 1] && b[i] < b[i + 1])
                isPoss = false;
        }

        if (!isPoss)
            no;
        else
            yes;
    }

    return 0;
}
