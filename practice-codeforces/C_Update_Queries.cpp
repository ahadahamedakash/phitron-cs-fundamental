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
        int n, m;
        cin >> n >> m;
        string str;
        cin >> str;
        set<int> st;

        int x;
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            st.insert(x);
        }

        string up;
        cin >> up;

        sort(up.begin(), up.end());

        int idx = 0;
        for (auto pos : st)
        {
            str[pos - 1] = up[idx];
            idx++;
        }
        cout << str << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1986/C
*/
