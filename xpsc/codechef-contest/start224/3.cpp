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
    t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        for (char &c : s)
            c = tolower(c);

        vector<int> freq(26, 0);
        for (char c : s)
            freq[c - 'a']++;

        int ans = 0;
        for (int i = 0; i < 26; ++i)
            ans = max(ans, freq[i]);

        for (int i = 0; i < 26; ++i)
        {
            for (int j = 0; j < 26; ++j)
            {
                if (i != j)
                {
                    int sum = freq[i] + freq[j];
                    ans = max(ans, sum);
                }
            }
        }

        cout << ans << nl;
    }

    return 0;
}
