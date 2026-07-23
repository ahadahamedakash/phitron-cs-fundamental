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

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << 1 << nl;
            continue;
        }
        if (n == 2)
        {
            cout << -1 << nl;
            continue;
        }

        vector<ll> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);

        for (int i = 0; i < n - 3; ++i)
        {
            ll lastNum = v.back();
            v.push_back(lastNum * 2);
        }

        for (ll val : v)
            cout << val << spc;

        cout << nl;
    }

    return 0;
}

/*
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

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << 1 << nl;
            continue;
        }

        if (n == 2)
        {
            cout << -1 << nl;
            continue;
        }

        vector<ll> ans;
        ans.push_back(1);
        ans.push_back(2);
        ll sum = 3;

        for (ll i = 0; i < n - 2; ++i)
        {
            ans.push_back(sum);
            sum *= 2;
        }

        for (ll val : ans)
            cout << val << spc;

        cout << nl;
    }

    return 0;
}

*/
