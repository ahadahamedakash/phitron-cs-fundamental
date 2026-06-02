#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define on cout << "On\n"
#define off cout << "Off\n"
#define ambiguous cout << "Ambiguous\n"
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

        int level = 4;

        if (k == 1)
        {
            if (n % 4 == 0)
            {
                on;
                continue;
            }
            else
            {
                ambiguous;
                continue;
            }
        }

        n %= 4;

        for (ll i = 0; i < n; ++i)
        {
            level++;
            if (level > 4)
                level = 1;
        }

        if (level == 4)
            off;
        else
            on;
    }

    return 0;
}
