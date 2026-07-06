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

        vector<int> a(n);

        for (int &x : a)
            cin >> x;

        vector<int> prefOne(n), prefThree(n);

        prefOne[0] = 0;
        prefThree[0] = 0;

        if (a[0] == 1)
            prefOne[0] = 1;

        if (a[0] == 3)
            prefThree[0] = 1;

        for (int i = 1; i < n; i++)
        {
            prefOne[i] = prefOne[i - 1];
            prefThree[i] = prefThree[i - 1];

            if (a[i] == 1)
                prefOne[i]++;

            if (a[i] == 3)
                prefThree[i]++;
        }

        vector<int> val(n);
        for (int i = 0; i < n; i++)
            val[i] = i - 2 * prefThree[i];

        vector<int> suff(n, INT_MIN);

        suff[n - 2] = val[n - 2];
        for (int i = n - 3; i >= 0; i--)
            suff[i] = max(suff[i + 1], val[i]);

        bool isPoss = false;
        for (int i = 0; i <= n - 3; i++)
        {
            if (2 * prefOne[i] >= i + 1)
            {
                if (suff[i + 1] >= val[i])
                {
                    isPoss = true;
                    break;
                }
            }
        }

        if (isPoss)
            yes;
        else
            no;
    }

    return 0;
}
