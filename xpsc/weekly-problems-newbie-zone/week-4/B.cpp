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
        vector<int> freq(26, 0);

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < 26; ++j)
            {
                if (v[i] == freq[j])
                {
                    cout << char('a' + j);
                    freq[j]++;
                    break;
                }
            }
        }

        cout << nl;
    }

    return 0;
}
