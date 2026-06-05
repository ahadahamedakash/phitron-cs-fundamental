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

        int oper = 0;
        for (int i = n - 2; i >= 0; --i)
        {
            if (v[i] >= v[i + 1])
            {
                while (v[i] >= v[i + 1])
                {
                    oper++;
                    v[i] /= 2;

                    if (v[i] == 0)
                        break;
                }

                if (v[i] == 0 && v[i + 1] == 0)
                {
                    oper = -1;
                    break;
                }
            }
        }

        cout << oper << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1675/B
*/
