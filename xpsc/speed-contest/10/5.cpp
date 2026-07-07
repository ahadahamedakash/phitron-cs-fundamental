#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

bool isPalindrome(int n)
{

    string s = to_string(n);

    int p = 0;
    while (p < sz(s) / 2)
    {
        if (s[p] != s[sz(s) - 1 - p])
            return false;

        p++;
    }

    return true;
}

bool isPalindrome(int n)
{
    string st = to_string(n);
    string rst = st;
    reverse(rst.begin(), rst.end());

    return st == rst;
}

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        ll l, r;
        cin >> l >> r;

        ll ans = 0;
        for (ll i = l; i <= r; ++i)
            if (isPalindrome(i))
                ans += i;

        cout << ans << nl;
    }

    return 0;
}
