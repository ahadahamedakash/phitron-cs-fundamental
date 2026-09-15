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

    unordered_map<ll, vint> mp;

    mp.reserve(2 * n);
    mp.max_load_factor(0.7);

    for (int i = 1; i <= n; ++i)
    {
        ll x;
        cin >> x;

        ll need = x + i - 1;

        mp[need].push_back(i);
    }

    queue<ll> q;
    unordered_set<ll> vis;

    vis.reserve(2 * n);
    vis.max_load_factor(0.7);

    q.push(n);
    vis.insert(n);

    ll ans = n;

    while (!q.empty())
    {
        ll len = q.front();
        q.pop();

        if (!mp.count(len))
            continue;

        for (int i : mp[len])
        {
            ll nxt = len + i - 1;

            if (!vis.count(nxt))
            {
                vis.insert(nxt);
                q.push(nxt);
                ans = max(ans, nxt);
            }
        }
    }

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

/*
    https://codeforces.com/problemset/problem/2027/C
*/
