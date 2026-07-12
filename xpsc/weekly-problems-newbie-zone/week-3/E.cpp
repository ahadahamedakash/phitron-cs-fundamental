#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n;
    cin >> n;
    int customerNo = 1;
    set<pair<int, int>> st;
    multiset<pair<int, int>> mst;
    vector<int> ans;

    for (int i = 1; i <= n; i++)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int money;
            cin >> money;

            st.insert({customerNo, money});
            mst.insert({money, -customerNo});
            customerNo++;
        }
        else if (type == 2)
        {
            int pos = st.begin()->first, money = st.begin()->second;
            ans.push_back(pos);
            st.erase(st.begin());
            mst.erase({money, -pos});
        }
        else
        {
            int pos = -mst.rbegin()->second, money = mst.rbegin()->first;
            ans.push_back(pos);
            mst.erase(--mst.end());
            st.erase({pos, money});
        }
    }

    for (auto val : ans)
        cout << val << " ";

    cout << nl;

    return 0;
}
