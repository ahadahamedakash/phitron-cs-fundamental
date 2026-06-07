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

    int T = 1;
    cin >> T;

    while (T--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> t(n);

        for (int &i : t)
            cin >> i;

        int cnt = 0;
        bool isWearing = false;
        for (int i = 0; i < n; ++i)
        {
            if (t[i] < a)
            {
                if (!isWearing)
                {
                    cnt++;
                    isWearing = true;
                }
            }
            else if (t[i] > b)
            {
                isWearing = false;
            }
        }

        cout << cnt << nl;
    }

    return 0;
}
