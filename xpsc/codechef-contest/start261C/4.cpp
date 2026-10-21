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
    ll n, d;
    cin >> n >> d;

    string s = to_string(n);
    for (int i = 0; i < sz(s); ++i)
    {
        if (s[i] - '0' != d)
            continue;

        int j = i;
        while (j >= 0)
        {
            int y = s[j] - '0' + 1;
            if (y == d)
                y++;

            if (y <= 9)
            {
                s[j] = char('0' + y);

                for (int k = j + 1; k < sz(s); ++k)
                    s[k] = (d == 0 ? '1' : '0');

                cout << s << nl;
                return;
            }

            j--;
        }

        string ans(sz(s) + 1, (d == 0 ? '1' : '0'));
        ans[0] = (d == 1 ? '2' : '1');

        cout << ans << nl;
        return;
    }

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
