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
    int n, k;
    cin >> n >> k;

    vll v(n);
    for (auto &i : v)
        cin >> i;

    ll ans = llmx;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            bool isPoss = true;

            for (int l = 0; l < n; ++l)
            {
                if (abs(i - l) > k && abs(j - l) > k)
                {
                    isPoss = false;
                    break;
                }
            }

            if (isPoss)
                ans = min(ans, v[i] + v[j]);
        }
    }

    if (ans == llmx)
        neg1;
    else
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
