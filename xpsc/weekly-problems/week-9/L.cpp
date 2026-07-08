#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    string s;
    cin >> s;

    vector<int> freq(26, 0);
    for (char c : s)
        freq[c - 'A']++;

    int odd = 0;

    for (int x : freq)
        if (x % 2)
            odd++;

    if (odd > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    string left = "", mid = "";

    for (int i = 0; i < 26; i++)
    {
        left += string(freq[i] / 2, char(i + 'A'));

        if (freq[i] % 2)
            mid += char(i + 'A');
    }

    string right = left;
    reverse(all(right));

    cout << left + mid + right;

    return 0;
}
