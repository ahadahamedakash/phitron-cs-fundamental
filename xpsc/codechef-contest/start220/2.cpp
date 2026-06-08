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
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        bool possible = false;
        for (char c : s)
        {
            freq[c - 'a']++;

            if (freq[c - 'a'] == 2)
            {
                possible = true;
                break;
            }
        }

        if (possible)
            yes;
        else
            no;
    }

    return 0;
}
