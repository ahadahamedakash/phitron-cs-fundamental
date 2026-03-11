#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int fibo(int n)
{
    if (n == 0 || n == 1) // n < 2
        return n;

    return fibo(n - 1) + (n + 2);
}

int main()
{
    fastIO();

    cout << fibo(100);

    return 0;
}
