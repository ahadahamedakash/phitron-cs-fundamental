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

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;

        int sw = 0;
        bool isValid = true;

        for (char c : s)
        {
            if (c == '1')
                sw = x;
            else
            {
                if (sw == 0)
                {
                    isValid = false;
                    break;
                }
                sw--;
            }
        }

        if (isValid)
            yes;
        else
            no;
    }

    return 0;
}
