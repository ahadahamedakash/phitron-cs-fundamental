#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    string s;
    cin >> s;

    vector<int> v(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        v[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (v[i] == 0)
        {
            cout << char('a' + i) << nl;
            return 0;
        }
    }

    cout << "None" << nl;
}

/*
    INPUT: atcoderregularcontest
    NOTE: instead of using counting array, there can also be use a boolean array and range based loop
*/
