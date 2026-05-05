#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n, m;
    cin >> n >> m;

    int reqCake = n * 2;

    if (m >= reqCake)
        cout << n << nl;
    else
        cout << m - n << nl;

    return 0;
}
