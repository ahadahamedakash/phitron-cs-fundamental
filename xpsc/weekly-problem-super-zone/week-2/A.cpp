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

const int maxN = 1e6 + 9;
vector<int> divisors(maxN);

int main()
{
    fastIO();

    for (int i = 1; i < maxN; ++i)
        for (int j = i; j < maxN; j += i)
            divisors[j]++;

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        cout << divisors[n] << nl;
    }

    return 0;
}
