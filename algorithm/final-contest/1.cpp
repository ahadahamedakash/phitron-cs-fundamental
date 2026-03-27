#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n, q;
    cin >> n >> q;

    vector<ll> arr(n + 1), prefix(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        prefix[i] = prefix[i - 1] + arr[i];
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;

        cout << prefix[b] - prefix[a - 1] << nl;
    }

    return 0;
}

/*
INPUT:
    5 3
    2 4 1 5 3
    1 3
    2 5
    4 4
*/
