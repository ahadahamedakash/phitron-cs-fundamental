#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n;
    cin >> n;

    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    int mx = *max_element(all(v));

    if (mx == 1)
    {
        cout << 1 << nl;
        return 0;
    }

    vector<int> freq(mx + 5, 0);
    for (int val : v)
        freq[val]++;

    int ans = 1;
    for (int i = 2; i <= mx; ++i)
    {
        int cnt = 0;
        for (int j = i; j <= mx; j += i)
            cnt += freq[j];

        ans = max(ans, cnt);
    }

    cout << ans << nl;

    return 0;
}
