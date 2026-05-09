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
        int n, s;
        cin >> n >> s;

        int maxScore = 6 * n - max(0, s - 5 * n);

        cout << maxScore << nl;
    }

    return 0;
}

/*
    LINK: https://www.codechef.com/problems/DICEERMAX
*/
