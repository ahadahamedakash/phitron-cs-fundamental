#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
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
        cin >> n;
        ll ans = 0;

        map<char, int> first, last;
        map<string, int> total;
        while (n--)
        {
            string s;
            cin >> s;
            char fs = s[0];
            char ls = s[1];

            int curPair = first[fs] + last[ls];
            int extra = 2 * total[s];

            ans += curPair - extra;

            first[fs]++;
            last[ls]++;

            total[s]++;
        }

        cout << ans << nl;
    }

    return 0;
}
