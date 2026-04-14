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
    cin.ignore();

    set<pair<string, string>> st;
    while (n--)
    {
        string species, color;
        cin >> species >> color;

        st.insert({species, color});
    }

    cout << st.size() << nl;

    return 0;
}

/*

int main()
{
    fastIO();

    int t;
    cin >> t;
    cin.ignore();

    map<string, int> mp;
    while (t--)
    {
        string s;
        getline(cin, s);
        if (s.empty())
            continue;

        mp[s]++;
    }

    cout << mp.size() << nl;

    return 0;
}
*/
