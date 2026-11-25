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
    int n, m;
    cin >> n >> m;

    int ans = 0;
    int bx = 0, by = 0, bz = 0;

    for (int x = 0; x <= n; ++x)
    {
        for (int y = 0; y <= m; ++y)
        {
            int a = n - x - 2 * y;
            int b = m - 2 * x - y;

            if (a < 0 || b < 0)
                continue;

            int z = min(a, b);
            int cur = 2 * (x + y) + z;

            if (cur > ans)
            {
                ans = cur;
                bx = x;
                by = y;
                bz = z;
            }
        }
    }

    vector<string> v(n, string(m, '.'));

    int r = 0, c = 0;
    for (int i = 0; i < bx; ++i)
    {
        v[r][c] = v[r][c + 1] = 'R';
        r++;
        c += 2;
    }

    for (int i = 0; i < by; ++i)
    {
        v[r][c] = 'R';
        v[r + 1][c] = 'R';
        r += 2;
        c++;
    }

    for (int i = 0; i < bz; ++i)
    {
        v[r][c] = 'R';
        r++;
        c++;
    }

    cout << ans << nl;

    for (auto s : v)
        cout << s << nl;
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
