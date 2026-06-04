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

        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        vector<int> freq(n + 1, 0);
        for (int val : v)
            freq[val]++;

        int mxFreq = 0, ans = INT_MAX;
        for (int c = 1; c <= n; ++c)
        {
            if (freq[c] > mxFreq)
            {
                mxFreq = freq[c];
                ans = c;
            }
            else if (freq[c] == mxFreq)
            {
                ans = min(ans, c);
            }
        }

        cout << ans << nl;
    }

    return 0;
}
