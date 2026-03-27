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
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i += 2)
        {
            char ch = s[i];
            int cnt = s[i + 1] - '0';

            for (int j = 0; j < cnt; j++)
            {
                cout << ch;
            }
        }

        cout << nl;
    }

    return 0;
}
