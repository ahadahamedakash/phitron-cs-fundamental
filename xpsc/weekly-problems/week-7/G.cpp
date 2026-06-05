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
        int n, k;
        cin >> n >> k;

        set<ll> st;
        for (int i = 0; i < n; ++i)
        {
            string s;
            cin >> s;

            ll msk = 0;
            for (char c : s)
                msk = (msk << 1) | (c - '0');

            st.insert(msk);
        }

        bool isPossible = true;
        for (int bit = 0; bit < k; ++bit)
        {
            if (!st.count(1LL << bit))
            {
                isPossible = false;
                break;
            }
        }

        if (isPossible)
            yes;
        else
            no;
    }

    return 0;
}
