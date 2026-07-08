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

        vector<ll> v(n + 1);
        v[0] = 0;
        for (int i = 1; i <= n; ++i)
            cin >> v[i];

        int mxElem = *max_element(all(v));

        ll ans = 0, pt = v[1];
        for (int i = 1; i <= n; ++i)
        {
            pt = max(pt, v[i]);
            ans += pt - v[i];
        }

        cout << ans << nl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// #define nl '\n'
// #define spc ' '
// #define imx INT_MAX
// #define imn INT_MIN
// #define llmx LLONG_MAX
// #define llmn LLONG_MIN
// #define ld long double
// #define ll long long int
// #define no cout << "NO\n"
// #define yes cout << "YES\n"
// #define sqr(x) ((x) * (x))
// #define sz(x) ((int)(x).size())
// #define all(x) x.begin(), x.end()
// #define rall(x) x.rbegin(), x.rend()
// #define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

// using namespace std;

// int main()
// {
//     fastIO();

//     int tc;
//     cin >> tc;

//     while (tc--)
//     {
//         int n;
//         cin >> n;

//         vector<ll> v(n + 1);
//         for (int i = 1; i <= n; ++i)
//             cin >> v[i];

//         vector<ll> pref(n + 1);
//         pref[1] = v[1];
//         for (int i = 2; i <= n; i++)
//             pref[i] = max(pref[i - 1], v[i]);

//         ll ans = 0;
//         for (int i = 1; i <= n; i++)
//             ans += pref[i] - v[i];

//         cout << ans << nl;
//     }

//     return 0;
// }
