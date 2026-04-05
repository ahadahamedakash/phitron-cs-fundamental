#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int s, t;
    cin >> s >> t;

    int cnt = 0;

    // for (int i = 0; i <= s; i++)
    // {
    //     for (int j = 0; j <= s; j++)
    //     {
    //         for (int k = 0; k <= s; k++)
    //         {
    //             if (i + j + k <= s && i * j * k <= t)
    //             {
    //                 cnt++;
    //             }
    //         }
    //     }
    // }

    for (int a = 0; a <= s; a++)
    {
        for (int b = 0; b <= s; b++)
        {
            int cMax = s - a - b;

            for (int c = 0; c <= cMax; c++)
            {
                if (a * b * c <= t)
                {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << nl;

    return 0;
}
