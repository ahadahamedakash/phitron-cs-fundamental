#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
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
        int n;
        cin >> n;

        vector<int> v(n + 1, 0);
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;

            if (x <= n)
                v[x]++;
        }

        vector<int> freq(n + 1, 0);
        for (int x = 1; x <= n; ++x)
        {
            if (v[x] == 0)
                continue;

            for (int i = x; i <= n; i += x)
                freq[i] += v[x];
        }

        cout << *max_element(all(freq)) << nl;
    }

    return 0;
}
