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

bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    fastIO();

    int n;
    cin >> n;

    if (n <= 2)
        cout << 1 << nl;
    else
        cout << 2 << nl;

    for (int i = 2; i <= n + 1; ++i)
    {
        if (isPrime(i))
            cout << 1 << spc;
        else
            cout << 2 << spc;
    }

    cout << nl;

    return 0;
}
