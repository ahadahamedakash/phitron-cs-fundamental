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

        vector<int> v;
        vector<vector<int>> mat(n, vector<int>(n));

        int l = 1, r = n * n;
        while (l <= r)
        {
            v.push_back(l++);
            if (l <= r)
                v.push_back(r--);
        }

        int num = 0;

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                mat[i][j] = v[num++];

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
                cout << mat[i][j] << " ";

            cout << nl;
        }
    }

    return 0;
}
