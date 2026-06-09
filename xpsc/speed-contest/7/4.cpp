#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
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
        string s1, s2;
        cin >> s1 >> s2;

        for (int i = 0; i < 5; ++i)
        {
            if (s1[i] == s2[i])
                cout << 'G';
            else
                cout << 'B';
        }

        cout << nl;
    }

    return 0;
}
