#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int half = n / 2;
        for (int i = 0; i < half; i++)
            cout << 0;

        for (int i = half; i < n; i++)
            cout << 1;

        cout << nl;
    }

    return 0;
}
