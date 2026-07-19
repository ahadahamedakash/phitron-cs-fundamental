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

        vector<int> neededFreq(10, 0);

        neededFreq[0] = 3;
        neededFreq[1] = 1;
        neededFreq[2] = 2;
        neededFreq[3] = 1;
        neededFreq[5] = 1;

        vector<int> currFreq(10, 0);

        int ans = 0;
        for (int i = 1; i <= n; ++i)
        {
            int x;
            cin >> x;

            currFreq[x]++;

            bool isPoss = true;
            for (int j = 0; j < 10; ++j)
            {
                if (currFreq[j] < neededFreq[j])
                {
                    isPoss = false;
                    break;
                }
            }

            if (isPoss && ans == 0)
                ans = i;
        }

        cout << ans << nl;
    }

    return 0;
}
