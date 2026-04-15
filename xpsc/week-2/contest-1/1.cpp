#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n, k;
    cin >> n >> k;

    int total = n * 100;
    int bTotal = (n * 60) + k;

    cout << ((total > bTotal) ? bTotal : total) << nl;

    return 0;
}
