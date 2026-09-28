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

const int p = 137, MOD = 1e9 + 7;
const int N = 1e5 + 9;

int pw[N];

void prec()
{
    pw[0] = 1;
    for (int i = 1; i < N; ++i)
        pw[i] = 1LL * pw[i - 1] * p % MOD;
}

int getHash(string s)
{
    int hash = 0;
    for (int i = 0; i < sz(s); ++i)
    {
        hash += 1LL * s[i] * pw[i] % MOD;
        hash %= MOD;
    }

    return hash;
}

void smash()
{

    string a, b;
    getline(cin, a);
    getline(cin, b);

    cout << 2 << nl;

    cout << a << spc << b << nl;
}

int main()
{
    fastIO();
    prec();

    int tc;
    cin >> tc;

    while (tc--)
        smash();

    return 0;
}
