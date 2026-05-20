#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
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

        for (int &i : v)
            cin >> i;

        int oddCnt = 0;
        for (int i = 0; i < n; ++i)
            if (v[i] % 2 != 0)
                oddCnt++;

        if (oddCnt == 1)
            yes;
        else
            no;
    }

    return 0;
}
