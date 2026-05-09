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
        for (int &i : v)
            cin >> i;

        ll sum = 0;
        int operation = 0, i = 0;

        while (i < n)
        {
            if (v[i] < 0)
            {
                operation++;
                while (i < n && v[i] <= 0)
                {
                    sum += llabs(v[i]);
                    i++;
                }
            }
            else
            {
                sum += v[i];
                i++;
            }
        }

        cout << sum << " " << operation << nl;
    }

    return 0;
}
