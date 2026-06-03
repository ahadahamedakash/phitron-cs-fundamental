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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int oper = 0, i = 0;

        while (i < n)
        {
            int j = i;
            while (j < n && s[j] == s[i])
                j++;

            int len = j - i;
            oper += len / 3;

            i = j;
        }

        cout << oper << nl;
    }

    return 0;
}
