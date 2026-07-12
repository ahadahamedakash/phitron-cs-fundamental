#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n, x;

    while (cin >> n >> x && (n || x))
    {
        int cnt = 0;

        for (int i = 1; i <= n; i++)
            for (int j = i + 1; j <= n; j++)
                for (int k = j + 1; k <= n; k++)
                    if (i + j + k == x)
                        cnt++;

        cout << cnt << nl;
    }

    return 0;
}
