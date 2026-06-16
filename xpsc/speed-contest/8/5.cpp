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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        int mx = 1, cnt = 1;
        char lastChar = s[0];

        for (int i = 1; i < n; ++i)
        {
            if (s[i] == lastChar)
                cnt++;
            else
            {
                lastChar = s[i];
                cnt = 1;
            }

            mx = max(mx, cnt);
        }

        cout << mx;

        while (q--)
        {
            char c;
            cin >> c;

            if (c == lastChar)
                cnt++;
            else
            {
                lastChar = c;
                cnt = 1;
            }

            mx = max(mx, cnt);
            cout << ' ' << mx;
        }

        cout << nl;
    }

    return 0;
}
