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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int l = 0, r = n - 1;

        int bestHeight = -1;
        int aL = 0, aR = 0;
        while (l < r)
        {
            int h = min(a[l], a[r]);

            if (h > bestHeight)
            {
                bestHeight = h;
                aL = l;
                aR = r;
            }

            if (a[l] < a[r])
                l++;
            else
                r--;
        }

        cout << aL << " " << aR << nl;
    }

    return 0;
}

/*
INPUT:
    2
    9
    1 8 3 4 0 7 6 5 2
    5
    5 2 1 6 3
*/
