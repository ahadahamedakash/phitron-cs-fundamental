#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

vector<int> findThreeMax(vector<int> &v)
{
    int sz = v.size();
    vector<pair<int, int>> temp(sz);

    for (int i = 0; i < sz; ++i)
    {
        temp[i].first = v[i];
        temp[i].second = i;
    }

    sort(temp.rbegin(), temp.rend());

    vector<int> ans(3);
    for (int i = 0; i < 3; ++i)
        ans[i] = temp[i].second;

    return ans;
}

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n), c(n);

        for (int &i : a)
            cin >> i;
        for (int &i : b)
            cin >> i;
        for (int &i : c)
            cin >> i;

        vector<int> maxOfA = findThreeMax(a);
        vector<int> maxOfB = findThreeMax(b);
        vector<int> maxOfC = findThreeMax(c);

        int ans = 0;
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                for (int k = 0; k < 3; ++k)
                {
                    int x = maxOfA[i], y = maxOfB[j], z = maxOfC[k];
                    if (x == y or y == z or z == x)
                        continue;

                    ans = max(ans, a[x] + b[y] + c[z]);
                }
            }
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1914/D
*/
