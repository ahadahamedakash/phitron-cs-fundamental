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
    t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        int pt = 0;
        int bestStreak = 0, currStreak = 0;

        for (int val : v)
        {
            if (val > 0)
                currStreak++;
            else
                currStreak = 0;

            bestStreak = max(bestStreak, currStreak);
        }

        cout << bestStreak << nl;
    }

    return 0;
}
