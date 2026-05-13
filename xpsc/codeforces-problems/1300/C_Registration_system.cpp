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
    map<string, int> mp;

    while (t--)
    {
        string s;
        cin >> s;

        if (mp[s] == 0)
        {
            cout << "OK" << nl;
            mp[s] = 1;
        }
        else
        {
            cout << s << mp[s] << nl;
            mp[s]++;
        }
    }

    return 0;
}

// int main()
// {
//     fastIO();

//     int t;
//     cin >> t;
//     map<string, int> mp;

//     while (t--)
//     {
//         string s;
//         cin >> s;

//         if (mp.find(s) == mp.end())
//         {
//             mp.insert({s, 0});
//             cout << "OK";
//         }
//         else
//         {
//             auto it = mp.find(s);
//             mp[s]++;
//             cout << it->first << it->second;
//         }

//         cout << nl;
//     }

//     return 0;
// }

/*
    LINK: https://codeforces.com/problemset/problem/4/C
*/
