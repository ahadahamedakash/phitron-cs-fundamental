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

        int posCnt = 0, negCnt = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];

            if (v[i] == 1)
                posCnt++;
            else
                negCnt++;
        }

        int oper = 0;
        while (negCnt > posCnt || negCnt % 2 == 1)
        {
            oper++;
            posCnt++;
            negCnt--;
        }

        cout << oper << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1834/A
*/
