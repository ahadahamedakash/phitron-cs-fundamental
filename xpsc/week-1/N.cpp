#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];

    for (int i = 0; i < n; i++)
    {
        vector<int> v2(v1);
        int n;
        string s;
        cin >> n >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'D')
            {
                if (v2[i] == 9)
                {
                    v2[i] = 0;
                }
                else
                {
                    v2[i]++;
                }
            }
            else if (s[i] == 'U')
            {
                if (v2[i] == '1')
                {
                    v2[i] = 0;
                }
                else
                {
                    v2[i]--;
                }
            }

            for (int i = 0; i < n; i++)
            {
                cout << v2[i] << " ";
            }
        }

        cout << nl;
    }

    return 0;
}
