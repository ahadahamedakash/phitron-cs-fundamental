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
        vector<int> v(3);
        for (int i = 0; i < 3; ++i)
            cin >> v[i];

        sort(all(v));

        int a = v[0], b = v[1], c = v[2];
        int moves = 0;

        while (a + b <= c)
        {
            if (a <= b)
                a++;
            else
                b++;

            moves++;
        }

        cout << moves << nl;
    }

    return 0;
}
