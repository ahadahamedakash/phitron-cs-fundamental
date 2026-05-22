#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        char color;
        cin >> color;
        string s;
        cin >> s;

        s += s;
        n *= 2;

        ll lastGreenIdx = -1;
        ll maxSeconds = INT_MIN;
        for (int i = n - 1; i >= 0; --i)
        {
            if (s[i] == 'g')
                lastGreenIdx = i;
            if (s[i] == color)
            {
                ll difference = lastGreenIdx - i;
                maxSeconds = max(maxSeconds, difference);
            }
        }

        cout << maxSeconds << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1744/C
*/
