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
        vector<string> balls(6);

        for (int i = 0; i < 6; ++i)
        {
            cin >> balls[i];
        }

        int i = 0, cnt = 0;
        bool isHactric = false;

        while (i < 6)
        {
            if (balls[i] == "W")
            {
                cnt++;
                if (cnt == 3)
                {
                    isHactric = true;
                    break;
                }
            }
            else
            {
                cnt = 0;
            }
            i++;
        }

        if (isHactric)
            yes;
        else
            no;
    }

    return 0;
}
