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

int main()
{
    fastIO();

    int n;
    cin >> n;

    vector<vll> dp(n + 1, vll(3, 0));
    for (int i = 1; i <= n; ++i)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        if (i == 1)
        {
            dp[i][0] = a;
            dp[i][1] = b;
            dp[i][2] = c;
        }
        else
        {
            dp[i][0] = a + max(dp[i - 1][1], dp[i - 1][2]);
            dp[i][1] = b + max(dp[i - 1][0], dp[i - 1][2]);
            dp[i][2] = c + max(dp[i - 1][0], dp[i - 1][1]);
        }
    }

    cout << max({dp[n][0], dp[n][1], dp[n][2]}) << nl;

    return 0;
}
