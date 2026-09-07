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

    int n;
    cin >> n;

    vint v(n);
    int total = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        total += v[i];
    }

    vector<bool> dp(total + 1, false);
    dp[0] = true;
    for (auto x : v)
        for (int i = total - x; i >= 0; --i)
            if (dp[i])
                dp[i + x] = true;

    vint ans;
    for (int i = 1; i <= total; ++i)
        if (dp[i])
            ans.push_back(i);

    cout << sz(ans) << nl;

    printv(ans);
}

int main()
{
    fastIO();

    smash();

    return 0;
}
