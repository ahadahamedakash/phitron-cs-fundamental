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
        int n;
        cin >> n;
        int oddCnt = 0, evenCnt = 0;

        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (x % 2)
                oddCnt++;
            else
                evenCnt++;
        }

        if (oddCnt == 0)
            cout << 0 << nl;
        else
        {
            int ans = evenCnt + 1;
            oddCnt--;
            ans += oddCnt / 2;
            cout << ans << nl;
        }
    }

    return 0;
}
