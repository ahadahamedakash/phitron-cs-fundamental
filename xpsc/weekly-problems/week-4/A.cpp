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
        int n;
        cin >> n;
        if (n % 2 != 0)
        {
            cout << "NO" << nl;
            continue;
        }

        cout << "YES" << nl;
        string str = "AA";

        for (int i = 0; i < n / 2; i++)
        {
            cout << str;

            if (str == "AA")
                str = "BB";
            else
                str = "AA";
        }

        cout << nl;
    }

    return 0;
}
