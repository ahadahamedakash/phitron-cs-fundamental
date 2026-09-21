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

const int nmax = 1e6;
const int MOD = 998244353;

int fact[nmax + 5];

void preCalFact()
{
    fact[0] = 1;

    for (int i = 1; i <= nmax; ++i)
        fact[i] = (1LL * fact[i - 1] * i) % MOD;
}

ll binExpo(int a, int b) // will return a^b
{
    if (b == 0)
        return 1;

    a %= MOD;
    ll x = binExpo(a, b / 2);

    if (b & 1)
        return ((sqr(x) % MOD) * a) % MOD;
    else
        return sqr(x) % MOD;
}

ll modInverse(int n)
{
    return binExpo(n, MOD - 2);
}

ll ncr(int n, int r) // n! / (r!*(n-r)!)
{
    if (r < 0 || r > n)
        return 0;

    ll a = fact[n];
    ll b = (1LL * fact[r] * fact[n - r]) % MOD;

    return (a * modInverse(b)) % MOD;
}

ll npr(int n, int r) // n! / (n-r)!
{
    if (r < 0 || r > n)
        return 0;

    ll a = fact[n];
    ll b = fact[n - r];

    return (a * modInverse(b)) % MOD;
}

void smash()
{
    ll n, m, k;
    cin >> n >> m >> k;
    // ans = n c k * m * (m - 1)^k

    cout << ((((ncr(n - 1, k) * m) % MOD) * binExpo(m - 1, k)) % MOD) << nl;
}

int main()
{
    fastIO();
    preCalFact();

    smash();

    return 0;
}
