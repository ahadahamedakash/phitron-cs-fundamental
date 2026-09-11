#include <bits/stdc++.h>

#define nl '\n'
#define spc ' '

#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN

#define ll long long int
#define ld long double

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define neg1 cout << "-1\n"

#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define dbg(x) cerr << #x << " = " << (x) << nl

#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

// Vector
using vint = vector<int>;
using vll = vector<ll>;

// Pair
using pii = pair<int, int>;
using pll = pair<ll, ll>;

// Vector of pairs
using vpii = vector<pii>;
using vpll = vector<pll>;

// Print vector
template <typename T>
void printv(const vector<T> &v)
{
    for (auto x : v)
        cout << x << spc;

    cout << nl;
}

const int INF = 1e9;

void smash()
{
    int n;
    cin >> n;

    vint v(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> v[i];

    vector<vint> dp(n + 1, vint(2, INF));

    dp[0][0] = 0;
    for (int i = 0; i < n; ++i)
    {
        if (dp[i][0] != INF)
        {
            dp[i + 1][1] = min(dp[i + 1][1], dp[i][0] + v[i + 1]);

            if (i + 2 <= n)
                dp[i + 2][1] = min(dp[i + 2][1], dp[i][0] + v[i + 1] + v[i + 2]);
        }

        if (dp[i][1] != INF)
        {
            dp[i + 1][0] = min(dp[i + 1][0], dp[i][1]);

            if (i + 2 <= n)
                dp[i + 2][0] = min(dp[i + 2][0], dp[i][1]);
        }
    }

    cout << min(dp[n][0], dp[n][1]) << nl;
}

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
        smash();

    return 0;
}

/*
    https://codeforces.com/problemset/problem/1418/C
*/
