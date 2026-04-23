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

        vector<int> a(n), freq(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        int missing = 0;

        for (int k = 0; k <= n; k++)
        {
            if (k > 0 && freq[k - 1] == 0)
                missing++;

            cout << max(missing, freq[k]) << " ";
        }
        cout << nl;
    }

    return 0;
}
