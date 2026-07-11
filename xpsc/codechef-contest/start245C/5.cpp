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

        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        vector<int> perm(n);
        for (int i = 0; i < n; ++i)
            perm[i] = i + 1;

        for (int i = 0; i < n; ++i)
        {
            int probI = n + 1 - v[i];

            if (probI == perm[i])
            {
                for (int j = 0; j < n; ++j)
                {
                    int probJ = n + 1 - v[j];

                    if (probI != perm[j] && probJ != perm[i])
                    {
                        swap(perm[i], perm[j]);
                        break;
                    }
                }
            }
        }

        bool isPoss = true;
        for (int i = 0; i < n; ++i)
            if (v[i] + perm[i] == n + 1)
                isPoss = false;

        if (!isPoss)
            cout << -1 << nl;
        else
        {
            for (int val : perm)
                cout << val << spc;
            cout << nl;
        }
    }

    return 0;
}
