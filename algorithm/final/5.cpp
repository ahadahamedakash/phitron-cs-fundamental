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
        string s1, s2;
        cin >> s1 >> s2;

        if (s1.length() != s2.length())
        {
            cout << "NO" << nl;
            continue;
        }

        int freq[26] = {0};

        for (int i = 0; i < (int)s1.length(); i++)
        {
            freq[s1[i] - 'a']++;
        }

        for (int i = 0; i < (int)s2.length(); i++)
        {
            freq[s2[i] - 'a']--;
        }

        bool possible = true;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] != 0)
            {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << nl;
    }

    return 0;
}
