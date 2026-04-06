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

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 0; i < n; i++)
        {
            int x;
            string s;
            cin >> x >> s;

            for (int j = 0; j < x; j++)
            {
                if (s[j] == 'D')
                {
                    if (v[i] == 9)
                        v[i] = 0;
                    else
                        v[i]++;
                }
                else if (s[j] == 'U')
                {
                    if (v[i] == 0)
                        v[i] = 9;
                    else
                        v[i]--;
                }
            }
        }

        for (int i = 0; i < n; i++)
            cout << v[i] << " ";

        cout << nl;
    }

    return 0;
}

/*
INPUT:
    3
    3
    9 3 1
    3 DDD
    4 UDUU
    2 DU
    2
    0 9
    9 DDDDDDDDD
    9 UUUUUUUUU
    5
    0 5 9 8 3
    10 UUUUUUUUUU
    3 UUD
    8 UUDUUDDD
    10 UUDUUDUDDU
    4 UUUU
*/

/*
OPTIMIZATION:
if (s[j] == 'D')
    v2[i] = (v2[i] + 1) % 10;
else
    v2[i] = (v2[i] - 1 + 10) % 10;
*/
