#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        string s, t;
        cin >> s >> t;

        vector<int> freq(26, 0);
        for (char c : t)
            freq[c - 'A']++;

        int j = t.size() - 1;
        bool isPoss = true;
        for (int i = s.size() - 1; i >= 0; --i)
        {
            if (j >= 0 && s[i] == t[j])
            {
                freq[s[i] - 'A']--;
                j--;
            }
            else
            {
                if (freq[s[i] - 'A'] > 0)
                {
                    isPoss = false;
                    break;
                }
            }
        }

        if (isPoss && j == -1)
            yes;
        else
            no;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1666/D
*/
