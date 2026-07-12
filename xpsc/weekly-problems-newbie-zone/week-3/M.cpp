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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        ll ans = 0;
        priority_queue<ll> pq;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                if (pq.empty())
                    continue;
                ans += pq.top();
                pq.pop();
            }
            else
            {
                pq.push(v[i]);
            }
        }

        cout << ans << nl;
    }

    return 0;
}
