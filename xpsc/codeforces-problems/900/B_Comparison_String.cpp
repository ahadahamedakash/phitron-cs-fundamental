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
        cin >> n;
        string s;
        cin >> s;

        ll longestSubtringLen = 1, currentSubstringLen = 1;
        for (int i = 1; i < n; ++i)
        {
            if (s[i] == s[i - 1])
                currentSubstringLen++;
            else
            {
                longestSubtringLen = max(longestSubtringLen, currentSubstringLen);
                currentSubstringLen = 1;
            }
        }

        longestSubtringLen = max(longestSubtringLen, currentSubstringLen);

        cout << longestSubtringLen + 1 << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1837/B
*/
