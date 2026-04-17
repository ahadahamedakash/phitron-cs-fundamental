#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    ll t;
    cin >> t;

    list<string> ls;
    unordered_map<string, list<string>::iterator> mp;

    while (t--)
    {
        string s;
        cin >> s;

        if (mp.find(s) == mp.end())
        {
            ls.push_front(s);
            mp[s] = ls.begin();
        }
        else
        {
            ls.erase(mp[s]);
            ls.push_front(s);
            mp[s] = ls.begin();
        }
    }

    for (auto &nm : ls)
        cout << nm << nl;

    return 0;
}

// #include <bits/stdc++.h>
// #define ll long long int
// #define all(x) x.begin(), x.end()
// #define nl '\n'
// #define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

// using namespace std;

// int main()
// {
//     fastIO();

//     ll t;
//     cin >> t;

//     list<string> ls;
//     while (t--)
//     {
//         string s;
//         cin >> s;

//         auto it = find(ls.begin(), ls.end(), s);

//         if (it == ls.end())
//         {
//             ls.push_front(s);
//         }
//         else
//         {
//             ls.erase(it);
//             ls.push_front(s);
//         }
//     }

//     for (auto &nm : ls)
//         cout << nm << nl;

//     return 0;
// }
