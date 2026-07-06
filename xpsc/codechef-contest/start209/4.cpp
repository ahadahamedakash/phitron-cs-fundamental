#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define ld long double
#define ll long long int
#define bob cout << "Bob\n"
#define alice cout << "Alice\n"
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

bool isGood(string s)
{
    if (sz(s) < 2 || s.front() != s.back())
        return false;

    bool z = false, o = false;
    for (char c : s)
    {
        if (c == '0')
            z = true;
        else
            o = true;
    }

    return z && o;
}

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int t = 0;
        for (int i = 1; i < n; ++i)
            if (s[i] != s[i - 1])
                t++;

        if (t > 1)
            alice;
        else
            bob;
    }

    return 0;
}
