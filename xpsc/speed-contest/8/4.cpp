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
        int n, oneCnt = 0;
        cin >> n;

        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        for (int x : v)
            if (x == 1)
                oneCnt++;

        if (oneCnt > n)
            no;
        else
        {
            if ((n - oneCnt) % 2 == 0)
                yes;
            else
                no;
        }
    }

    return 0;
}
