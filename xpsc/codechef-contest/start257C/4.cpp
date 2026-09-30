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

bool helper(ll p, vll &v, int q, int r)
{
    int l = 0;
    while (l < sz(v) && v[l] <= p)
        l++;

    if (l > q)
        return false;

    ll s = 0;
    for (int i = l; i < sz(v); ++i)
    {
        if (i > r && v[i] >= p)
            return true;

        if (v[i] >= p)
            s += v[i] - p;
        else
        {
            ll z = p - v[i];

            if (s < z)
                return false;

            s -= z;
        }
    }

    return true;
}

void smash()
{
    int n;
    cin >> n;

    vll v(n);
    for (auto &i : v)
        cin >> i;

    int x = imn, y = imn;
    for (int i = 0; i + 1 < n; ++i)
    {
        if (v[i] > v[i + 1])
        {
            if (x == imn)
                x = i;

            y = i;
        }
    }

    if (x == imn)
    {
        neg1;
        return;
    }

    ll lt = 1, rt = *max_element(all(v)), ans = 1;
    while (lt <= rt)
    {
        ll mid = lt + (rt - lt) / 2;

        if (helper(mid, v, x, y))
        {
            ans = mid;
            lt = mid + 1;
        }
        else
            rt = mid - 1;
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
