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

    int n;
    cin >> n;
    vector<vector<int>> gifts(n + 1);

    for (int i = 1; i <= n; ++i)
    {
        int totalGifts;
        cin >> totalGifts;

        for (int j = 0; j < totalGifts; ++j)
        {
            int person;
            cin >> person;

            gifts[person].push_back(i);
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        cout << gifts[i].size() << " ";

        for (int val : gifts[i])
            cout << val << " ";

        cout << nl;
    }

    return 0;
}
