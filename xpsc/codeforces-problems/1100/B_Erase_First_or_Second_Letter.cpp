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

        map<char, int> freq;
        int cnt = 0;
        vector<int> distinct(n, 0);
        for (int i = 0; i < n; ++i)
        {
            freq[s[i]]++;
            if (freq[s[i]] == 1)
                cnt++;
            distinct[i] = cnt;
        }

        ll ans = 0;
        for (int val : distinct)
            ans += val;

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1917/B
*/
