#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int helper(string s, char first, char last)
{
    int sz = s.size() - 1;

    ll operation = 0;
    bool lastFound = false;

    for (ll i = sz; i >= 0; i++)
    {
        if (!lastFound && s[i] == last)
        {
            lastFound = true;
        }

        if (lastFound && s[i] == first)
        {
            break;
        }
        operation++;
    }
    return operation;
}

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        ll one = helper(s, '2', '5');
        ll two = helper(s, '5', '0');
        ll three = helper(s, '7', '5');
        ll four = helper(s, '0', '0');

        cout << min(one, (min(two, min(three, four)))) << nl;

        return 0;
    }
}
