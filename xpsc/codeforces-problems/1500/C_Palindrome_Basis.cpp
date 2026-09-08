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

const int maxN = 4e4, N = 500, M = 4e4 + 9, MOD = 1e9 + 7;
ll dp[N][M];
vint palindromes;

void prec()
{
    for (int i = 1; i <= maxN; ++i)
    {
        string s = to_string(i), t = s;
        reverse(all(s));

        if (s == t)
            palindromes.push_back(i);
    }
}

ll helper(int i, int sum)
{
    if (i >= sz(palindromes))
        return (sum == 0);

    if (dp[i][sum] != -1)
        return dp[i][sum];

    ll ans = 0;
    if (palindromes[i] <= sum)
        ans += helper(i, sum - palindromes[i]) % MOD;

    ans += helper(i + 1, sum) % MOD;

    return dp[i][sum] = ans % MOD;
}

void smash()
{
    int targetSum;
    cin >> targetSum;

    cout << helper(0, targetSum) << nl;
}

int main()
{
    fastIO();

    prec();
    memset(dp, -1, sizeof(dp));

    int tc;
    cin >> tc;

    while (tc--)
        smash();

    return 0;
}
