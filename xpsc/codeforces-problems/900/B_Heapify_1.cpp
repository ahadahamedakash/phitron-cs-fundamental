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

int oddNum(int n)
{
    while (n % 2 == 0)
        n /= 2;

    return n;
}

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
        vector<int> v(n + 1, 0);
        for (int i = 1; i < n + 1; ++i)
            cin >> v[i];

        bool isPossible = true;
        for (int i = 1; i < n + 1; ++i)
        {
            if (oddNum(v[i]) != oddNum(i))
            {
                isPossible = false;
                break;
            }
        }

        if (isPossible)
            yes;
        else
            no;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/2195/B
*/
