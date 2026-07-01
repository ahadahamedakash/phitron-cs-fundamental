#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define ld long double
#define ll long long int
#define no cout << "No\n"
#define yes cout << "Yes\n"
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        bool isFounded = false;
        for (int i = 0; i <= k; ++i)
        {
            int red = i;
            int blue = k - i;
            bool isPossible = true;

            for (int j = 0; j < n; ++j)
            {
                red += v[j];
                blue -= v[j];

                if (red < 0 || blue < 0)
                {
                    isPossible = false;
                    break;
                }
            }

            if (isPossible)
            {
                isFounded = true;
                break;
            }
        }

        if (isFounded)
            yes;
        else
            no;
    }

    return 0;
}
