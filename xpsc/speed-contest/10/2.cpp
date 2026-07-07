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

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        bool isPoss = false;
        if (a + c == 180)
            isPoss = true;
        if (!isPoss)
        {
            no;
            continue;
        }

        if (b + c == 180)
            isPoss = true;
        if (!isPoss)
            no;
        else
            yes;
    }

    return 0;
}
