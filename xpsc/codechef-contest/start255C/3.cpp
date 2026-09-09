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

void smash()
{
    ll x, y;
    cin >> x >> y;

    ll answer = llmx;
    for (ll i = 1; i <= 1000; ++i)
    {
        ll p = 0;
        for (ll j = 1; j <= i; ++j)
        {
            p -= x;
            p += y * sqr(j);

            if (p > 0)
            {
                answer = min(answer, j);
                break;
            }
        }

        if (p <= 0)
        {
            for (ll j = i + 1; j <= 1000; ++j)
            {
                p += y * sqr(i);

                if (p > 0)
                {
                    answer = min(answer, j);
                    break;
                }
            }
        }
    }

    cout << answer << nl;
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
