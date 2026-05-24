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
    t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        ll k = 2;

        while (true)
        {
            set<ll> st;
            for (ll val : v)
            {
                st.insert(val % k);

                if (st.size() > 2)
                    break;
            }

            if (st.size() == 2)
            {
                cout << k << nl;
                break;
            }

            k *= 2;
        }
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1909/B
*/
