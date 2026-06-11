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
        string s;
        cin >> s;

        unordered_set<char> st;
        vector<int> prefUniq(n + 1, 0), sufUniq(n + 1, 0);

        for (int i = 1; i < n; ++i)
        {
            st.insert(s[i - 1]);
            prefUniq[i] = st.size();
        }

        st.clear();

        for (int i = n; i > 0; --i)
        {
            st.insert(s[i - 1]);
            sufUniq[i] = st.size();
        }

        int ans = INT_MIN;
        for (int i = 1; i < n; ++i)
            ans = max(ans, prefUniq[i] + sufUniq[i + 1]);

        cout << ans << nl;
    }

    return 0;
}

/*
    Link: https://codeforces.com/problemset/problem/1791/D
*/
