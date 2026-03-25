#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    ll n;
    cin >> n;

    ll arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    map<ll, pair<int, int>> mp;

    for (int i = 1; i <= n; i++)
    {
        ll val = arr[i];
        if (mp.find(val) == mp.end())
            mp[val] = {i, i};
        else
            mp[val].second = i;
    }

    for (auto it : mp)
    {
        cout << it.first << " " << it.second.first << " " << it.second.second << nl;
    }

    return 0;
}

/*
INPUT:
    10
    7 2 1 10 8 2 2 12 7 12
*/
