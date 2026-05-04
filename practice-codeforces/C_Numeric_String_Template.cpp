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
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        map<int, vector<int>> mp1;

        for (int i = 0; i < n; ++i)
        {
            int val = a[i];
            int pos = i + 1;

            mp1[val].push_back(pos);
        }

        int q;
        cin >> q;
        while (q--)
        {
            string s;
            cin >> s;

            if (s.size() != n)
            {
                cout << "NO" << nl;
                continue;
            }
            map<char, vector<int>> mp2;
            for (int i = 0; i < s.size(); ++i)
            {
                char c = s[i];
                int pos = i + 1;

                mp2[c].push_back(pos);
            }

            int flag = 1;
            map<int, int> dup;
            for (int i = 0; i < n; ++i)
            {

                int val = a[i];
                char ch = s[i];

                if (dup[val] > 0)
                    continue;

                if (mp1[val] != mp2[ch])
                {
                    flag = 0;
                    break;
                }
                dup[val]++;
            }

            if (flag == 1)
                cout << "YES" << nl;
            else
                cout << "NO" << nl;
        }
    }

    return 0;
}

/*
    https://codeforces.com/problemset/problem/2000/C
*/
