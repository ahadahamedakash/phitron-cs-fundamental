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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        vector<int> freq(105, 0);
        for (int i = 0; i < n; i++)
        {
            freq[v[i]]++;
        }

        for (int i = 0; i < 105; i++)
        {
            if (freq[i] == 0)
            {
                cout << i << nl;
                break;
            }
        }
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/2160/A
*/
