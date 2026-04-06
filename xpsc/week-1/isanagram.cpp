#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

bool isAnagram(string s, string t)
{
    if (s.size() != t.size())
        return false;

    vector<int> freq(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int x : freq)
    {
        if (x != 0)
            return false;
    }

    return true;
}

int main()
{
    fastIO();

    string s, t;
    cin >> s >> t;

    cout << (isAnagram(s, t) ? "Yes" : "No") << nl;

    return 0;
}
