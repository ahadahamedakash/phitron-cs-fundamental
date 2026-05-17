#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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

        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        bool isSorted = true;
        for (int i = 0; i < n - 1; ++i)
        {
            if (v[i] > v[i + 1])
            {
                isSorted = false;
                break;
            }
        }

        cout << (isSorted ? n : 1) << nl;
    }

    return 0;
}
