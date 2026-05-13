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

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cout << n + 1 - x << " ";
        }

        cout << nl;
    }

    return 0;
}

/*
INPUT:
    5
    5
    1 2 4 5 3
    2
    1 2
    1
    1
    3
    3 2 1
    4
    1 4 3 2
*/
