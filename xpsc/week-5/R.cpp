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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int operation = 0, i = 0;

        while (i < n)
        {
            if (s[i] == 'B')
            {
                operation++;
                i += k;
            }
            else
            {
                i++;
            }
        }

        cout << operation << nl;
    }

    return 0;
}
