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

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n, 0);
        int card = k;
        bool forDir = true;

        while (card > 0)
        {
            if (forDir)
            {
                for (int i = 0; i < n && card > 0; ++i)
                {
                    v[i] += card;
                    card--;
                }
            }
            else
            {
                for (int i = n - 1; i >= 0 && card > 0; --i)
                {
                    v[i] += card;
                    card--;
                }
            }

            forDir = !forDir;
        }

        sort(rall(v));

        cout << v[0] << nl;
    }

    return 0;
}
