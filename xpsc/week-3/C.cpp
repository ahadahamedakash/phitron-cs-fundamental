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
        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
        }

        priority_queue<int> pq;
        for (auto [x, y] : cnt)
            pq.push(y);

        while (!pq.empty())
        {
            if (pq.size() < 2)
                break;

            int x, y;
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();
            x--, y--;

            if (x >= 1)
                pq.push(x);
            if (y >= 1)
                pq.push(y);
        }
        int ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }

        cout << ans << nl;
    }

    return 0;
}
