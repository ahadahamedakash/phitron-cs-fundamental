#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n;
    cin >> n;
    int fibo[n + 1];

    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    cout << fibo[n] << nl;

    return 0;
}
