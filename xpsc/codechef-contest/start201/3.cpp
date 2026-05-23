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
        string s;
        cin >> n;
        cin >> s;

        bool isPossible = true;
        for (int i = 0; i < n;)
        {

            if (s[i] == '0')
            {
                i++;
                continue;
            }

            int cnt = 0;
            while (i < n && s[i] == '1')
            {
                cnt++;
                i++;
            }

            if (cnt == 1 || cnt == 2)
            {
                isPossible = false;
                break;
            }
        }

        if (isPossible)
            yes;
        else
            no;
    }

    return 0;
}
