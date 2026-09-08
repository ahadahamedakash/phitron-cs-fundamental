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

const int N = 1e3 + 9, INF = 1e4;
int n, m, l, dp[N][N];
string a, b, c;

int helper(int i, int j, int k)
{
    if (k >= l)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    int ans = INF;
    if (i < n)
    {
        if (a[i] == c[k])
            ans = min(ans, helper(i + 1, j, k + 1));
        else
            ans = min(ans, 1 + helper(i + 1, j, k + 1));
    }

    if (j < m)
    {
        if (b[j] == c[k])
            ans = min(ans, helper(i, j + 1, k + 1));
        else
            ans = min(ans, 1 + helper(i, j + 1, k + 1));
    }

    return dp[i][j] = ans;
}

void smash()
{
    cin >> a >> b >> c;
    n = sz(a);
    m = sz(b);
    l = sz(c);

    for (int i = 0; i <= n; ++i)
        for (int j = 0; j <= m; ++j)
            dp[i][j] = -1;

    cout << helper(0, 0, 0) << nl;
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
    https://codeforces.com/problemset/problem/2050/E
*/
