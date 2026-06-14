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

bool isPrime(int n)
{
    if (n == 1)
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

    if (isPrime(n))
        cout << 1 << nl;
    else if (n % 2 == 0 || isPrime(n - 2))
        cout << 2 << nl;
    else
        cout << 3 << nl;

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/735/D
*/
