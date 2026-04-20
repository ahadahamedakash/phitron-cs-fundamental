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

        int cnt = 0;

        map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            int key = v[i] - i;
            cnt += freq[key];
            freq[key]++;
        }

        cout << cnt << nl;
    }

    return 0;
}

/*
    LINK: https://www.codechef.com/problems/EQSUM
*/
