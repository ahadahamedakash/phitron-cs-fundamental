#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

const int INF = 1e9;

int helper(string s, char first, char last)
{
    int sz = s.size() - 1;

    int operation = 0;
    bool lastFound = false, firstFound = false;

    for (int i = sz; i >= 0; i--)
    {
        if (s[i] == last && !lastFound)
        {
            lastFound = true;
            continue;
        }
        else if (lastFound && s[i] == first)
        {
            firstFound = true;
            break;
        }
        operation++;
    }

    if (!lastFound || !firstFound)
        return INF;

    return operation;
}

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int one = helper(s, '2', '5');
        int two = helper(s, '5', '0');
        int three = helper(s, '7', '5');
        int four = helper(s, '0', '0');

        cout << min({one, two, three, four}) << nl;
    }

    return 0;
}

/*
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size();
        int ans = 1e9;

        vector<string> endings = {"00", "25", "50", "75"};

        for (auto e : endings)
        {
            int pos = n - 1;
            int ops = 0;

            while (pos >= 0 && s[pos] != e[1])
            {
                pos--;
                ops++;
            }

            if (pos < 0)
                continue;

            pos--;

            while (pos >= 0 && s[pos] != e[0])
            {
                pos--;
                ops++;
            }

            if (pos < 0)
                continue;

            ans = min(ans, ops);
        }

        cout << ans << '\n';
    }

    return 0;
}
*/

/*
    LINK: https://codeforces.com/contest/1593/problem/B
*/
