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

        vector<char> ans;
        vector<int> loCase, upCase;

        for (char c : s)
        {
            if (c == 'b')
            {
                if (!loCase.empty())
                {
                    int idx = loCase.back();
                    loCase.pop_back();
                    ans[idx] = '1';
                }
            }
            else if (c == 'B')
            {
                if (!upCase.empty())
                {
                    int idx = upCase.back();
                    upCase.pop_back();
                    ans[idx] = '1';
                }
            }
            else
            {
                ans.push_back(c);

                if (c >= 'a' && c <= 'z')
                    loCase.push_back(ans.size() - 1);
                else
                    upCase.push_back(ans.size() - 1);
            }
        }

        for (char c : ans)
        {
            if (c != '1')
                cout << c;
        }

        cout << nl;
    }

    return 0;
}

/*

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        string ans = "";

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {
                for (int j = ans.size() - 1; j >= 0; j--)
                {
                    if (ans[j] >= 'a' && ans[j] <= 'z')
                    {
                        ans.erase(ans.begin() + j);
                        break;
                    }
                }
            }
            else if (s[i] == 'B')
            {
                for (int j = ans.size() - 1; j >= 0; j--)
                {
                    if (ans[j] >= 'A' && ans[j] <= 'Z')
                    {
                        ans.erase(ans.begin() + j);
                        break;
                    }
                }
            }
            else
            {
                ans.push_back(s[i]);
            }
        }

        cout << ans << nl;
    }

    return 0;
}
*/

/*
    LINK: https://codeforces.com/problemset/problem/1907/B
*/
