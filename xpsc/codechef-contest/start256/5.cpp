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

const ll MOD = 998244353;

void smash()
{
    int n;
    cin >> n;

    vll v(n + 1), w(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
        w[v[i]] = i;
    }

    vll dp1(n + 1, 0), dp2(n + 1, 0);
    dp1[1] = 1;
    for (int i = 1; i < n; ++i)
    {
        for (auto &i : dp2)
            i = 0;

        if (w[i] < w[i + 1])
        {
            ll x = 0;
            for (int j = 1; j <= i; ++j)
            {
                x = (x + dp1[j]) % MOD;
                dp2[j + 1] = x;
            }
        }
        else
        {
            ll y = 0;
            for (int j = i; j >= 1; --j)
            {
                y = (y + dp1[j]) % MOD;
                dp2[j] = y;
            }
        }

        dp1 = dp2;
    }

    ll ans = 0;
    for (int i = 1; i <= n; ++i)
        ans = (ans + dp1[i]) % MOD;

    cout << ans << nl;
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
