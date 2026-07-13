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
        int n, k;
        cin >> n >> k;

        vector<int> v(k);
        for (int &i : v)
            cin >> i;

        sort(rall(v));

        int t = 0, saved = 0;
        for (int i = 0; i < k; ++i)
        {
            if (v[i] > t)
            {
                saved++;
                t += (n - v[i]);
            }
            else
                break;
        }

        cout << saved << nl;
    }

    return 0;
}

/*
    https://codeforces.com/problemset/problem/1593/C
*/
