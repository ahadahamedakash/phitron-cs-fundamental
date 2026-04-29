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
        string s;
        cin >> s;

        int sz = s.size();
        int maxLen = 0;

        for (int i = 0; i < sz; i++)
        {
            for (int j = i; j < sz; j++)
            {
                int pos = j - i;

                if (pos % 2 == 0)
                {
                    if (s[j] != 'u' && s[j] != 'o')
                        break;
                }
                else
                {
                    if (s[j] != 'w')
                        break;
                }

                int len = j - i + 1;

                if (len % 2 == 1)
                    maxLen = max(maxLen, len);
            }
        }

        cout << maxLen << nl;
    }

    return 0;
}
