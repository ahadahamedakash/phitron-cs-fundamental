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
        int k;
        cin >> k;
        vector<int> v(k);
        for (int &i : v)
            cin >> i;

        int mx = 0, cnt = 0;
        for (int val : v)
        {
            mx = max(mx, val);

            if (val >= 2)
                cnt++;
        }

        if (mx > 2 || cnt > 1)
            yes;
        else
            no;
    }

    return 0;
}
