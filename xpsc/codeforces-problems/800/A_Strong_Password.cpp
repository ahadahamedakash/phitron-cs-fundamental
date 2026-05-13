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

        int sz = s.size();
        string ans = "";
        bool inserted = false;

        if (sz == 1)
        {
            char next = (s[0] == 'z') ? 'a' : s[0] + 1;
            cout << s << next << nl;
            continue;
        }

        for (int i = 0; i < sz - 1; i++)
        {
            ans.push_back(s[i]);

            if (!inserted && s[i] == s[i + 1])
            {
                char next = (s[i] == 'z') ? 'a' : s[i] + 1;
                ans.push_back(next);
                inserted = true;
            }
        }

        ans.push_back(s[sz - 1]);

        if (!inserted)
        {
            char next = (s[0] == 'z') ? 'a' : s[0] + 1;
            ans = next + s;
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1997/A
*/
