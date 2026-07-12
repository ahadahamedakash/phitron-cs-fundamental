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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int cnt = 0, problem = 1;
    for (int i = 0; i < n; i++)
    {
        if (problem <= v[i])
        {
            cnt++;
            problem++;
        }
    }

    cout << cnt << nl;

    return 0;
}
