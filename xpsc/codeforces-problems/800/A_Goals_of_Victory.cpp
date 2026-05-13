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
        vector<int> v(n - 1);

        int sum = 0;
        for (int &i : v)
        {
            cin >> i;
            sum += i;
        }

        cout << -1 * sum << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1877/A
*/
