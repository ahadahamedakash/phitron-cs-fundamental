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

const ll MOD = 1000003;
const int nmax = 1000000;
ll fact[nmax + 5];

void calculateFact()
{
    fact[0] = 1;
    for (int i = 1; i < nmax + 5; ++i)
        fact[i] = (fact[i - 1] * i) % MOD;
}

ll binExpo(ll a, ll b) // will return a ^ b
{
    if (b == 0)
        return 1 % MOD;

    ll x = binExpo(a, b / 2);

    if (b & 1)
        return (((sqr(x) % MOD) * a) % MOD);
    else
        return (sqr(x) % MOD);
}

ll modInver(ll n)
{
    // ll ans = 1;
    // // n ^ ( mod - 2)
    // for (ll i = 1; i <= MOD - 2; ++i)
    //     ans = (ans * n) % MOD;

    return binExpo(n, MOD - 2) % MOD;
}

ll ncr(ll n, ll r) // n! / (r! * (n - r)!)
{
    ll a = fact[n];
    ll b = (fact[r] * fact[n - r]) % MOD;

    return ((a * modInver(b)) % MOD);
}

ll npr(ll n, ll r) // n! / (n - r)!
{
    ll a = fact[n];
    ll b = fact[n - r];

    return ((a * modInver(b)) % MOD);
}

void smash(int &cnt)
{
    ll n, r;
    cin >> n >> r;

    cout << "Case " << cnt++ << ": ";
    cout << ncr(n, r) << nl;
}

int main()
{
    fastIO();

    calculateFact();

    int tc;
    cin >> tc;

    int cnt = 1;

    while (tc--)
        smash(cnt);

    return 0;
}
