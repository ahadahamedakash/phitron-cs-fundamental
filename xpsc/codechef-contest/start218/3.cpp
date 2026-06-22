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
        int n;
        string s;
        cin >> n;
        cin >> s;

        int ones = 0, ways = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
                ones++;

            int len = i + 1;

            if (2 * ones > len)
                ways++;
        }

        cout << ways << nl;
    }

    return 0;
}
