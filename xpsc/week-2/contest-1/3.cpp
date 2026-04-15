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
        vector<int> neg;

        int negSum = 0;
        int posSum = 0;

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] >= 0)
            {
                posSum += v[i];
                cnt++;
            }
            else
            {
                negSum += v[i];
                neg.push_back(v[i]);
            }
        }

        sort(neg.rbegin(), neg.rend());

        for (int i = 0; i < neg.size(); i++)
        {
            if (posSum + neg[i] >= 0)
            {
                cnt++;
                posSum += neg[i];
            }
        }

        cout << cnt << nl;
    }

    return 0;
}
