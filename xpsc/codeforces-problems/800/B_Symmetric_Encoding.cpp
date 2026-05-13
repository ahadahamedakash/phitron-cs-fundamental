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
        int n;
        string s;
        cin >> n >> s;
        set<char> st;
        vector<char> v;
        unordered_map<char, char> ump;

        for (int i = 0; i < n; i++)
            st.insert(s[i]);

        for (auto &c : st)
            v.push_back(c);

        int lt = 0, rt = v.size() - 1;

        while (lt <= rt)
        {
            ump[v[lt]] = v[rt];
            ump[v[rt]] = v[lt];
            lt++, rt--;
        }

        for (int i = 0; i < n; i++)
            cout << ump[s[i]];

        cout << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1974/B
*/
