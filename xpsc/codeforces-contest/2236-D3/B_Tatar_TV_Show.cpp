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
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        bool isPossible = true;
        for (int i = 0; i < k; ++i)
        {
            int cntOfOne = 0;
            for (int j = i; j < n; j += k)
            {
                if (s[j] == '1')
                    cntOfOne++;
            }

            if (cntOfOne % 2 == 1)
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
