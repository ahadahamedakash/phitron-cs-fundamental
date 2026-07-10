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

        int ans = imn, currSum, i, j;
        currSum = i = j = 0;

        while (j < n)
        {
            if (currSum < 0)
            {
                currSum = 0;
                i = j;
            }

            if (i < n)
            {
                if ((v[j] ^ v[j - 1]) & 1)
                {
                    currSum += v[j];
                }
                else
                {
                    currSum = v[j];
                    i = j;
                }
            }
            else
            {
                currSum = v[j];
            }

            ans = max(ans, currSum);
            j++;
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    https://codeforces.com/problemset/problem/1899/C
*/
