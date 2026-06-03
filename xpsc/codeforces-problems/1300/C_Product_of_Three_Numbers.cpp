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
        vector<int> fact;
        for (int i = 2; i * i <= n; ++i)
        {
            if (n % i != 0)
                continue;

            fact.push_back(i);
            n /= i;

            if (fact.size() == 2)
                break;
        }

        if (n == 1 || fact.size() < 2 || n == fact[0] || n == fact[1])
        {
            no;
        }
        else
        {
            yes;
            cout << fact[0] << " " << fact[1] << " " << n << nl;
        }
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1294/C
*/
