#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &i : v)
            cin >> i;
        sort(all(v));

        multiset<int> mst(v.begin(), v.end());

        int valToCheck = v[0] + v[n - 1];
        bool isPossible = true;

        while (!mst.empty())
        {
            int x = *mst.begin();
            mst.erase(mst.begin());

            int valToFind = valToCheck - x;

            auto it = mst.find(valToFind);
            if (it == mst.end())
            {
                isPossible = false;
                break;
            }

            mst.erase(it);
        }

        if (isPossible)
            yes;
        else
            no;
    }

    return 0;
}
