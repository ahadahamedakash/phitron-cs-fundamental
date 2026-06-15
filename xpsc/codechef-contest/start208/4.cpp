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
        int n;
        cin >> n;
        set<ll> st;
        for (int i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;
            st.insert(x);
        }

        if (st.size() > 2)
            cout << *(--st.end()) - 1 << nl;
        else if (st.size() == 1)
            cout << *(st.begin()) - 1 << nl;
        else
        {
            ll a = *(st.begin()), b = *(--st.end());

            if (a != b - 1)
                cout << b - 1 << nl;
            else
                cout << a - 1 << nl;
        }
    }

    return 0;
}
