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
        string s;
        cin >> n >> s;

        vector<int> freq(26, 0);
        int point = 0;

        for (int i = 0; i < n; i++)
        {
            if (freq[s[i] - 'A'] == 0)
            {
                freq[s[i] - 'A'] += 2;
                point += 2;
            }
            else
            {
                freq[s[i] - 'A']++;
                point++;
            }
        }

        // for (int c : freq)
        //     point += c;

        cout << point << nl;
    }

    return 0;
}

/*
ANOTHER OPTIMIZATION:
int point = 0;
vector<bool> vis(26, false);

for (char c : s)
{
    point += vis[c - 'A'] ? 1 : 2;
    vis[c - 'A'] = true;
}
*/

/*
    LINK: https://codeforces.com/contest/1703/problem/B
*/
