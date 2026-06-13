// #include <bits/stdc++.h>
// #define ll long long int
// #define ld long double
// #define all(x) x.begin(), x.end()
// #define rall(x) x.rbegin(), x.rend()
// #define nl '\n'
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

// using namespace std;

// int main()
// {
//     fastIO();

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector<int> v(n);
//         for (int &i : v)
//             cin >> i;

//         vector<vector<ll>> mn(n, vector<ll>(n, 0)), mx(n, vector<ll>(n, 0));

//         for (int i = 0; i < n; ++i)
//         {
//             mn[i][i] = v[i];
//             mx[i][i] = v[i];
//         }

//         for (int i = 2; i <= n; ++i)
//         {
//             for (int l = 0; l + i - 1 < n; ++l)
//             {
//                 int r = l + i - 1;

//                 mn[l][r] = LLONG_MAX;
//                 mx[l][r] = LLONG_MIN;

//                 for (int k = l; k < r; ++k)
//                 {
//                     mn[l][r] = min(mn[l][r], mn[l][k] + 2 * mn[k + 1][r]);
//                     mx[l][r] = max(mx[l][r], mx[l][k] + 2 * mx[k + 1][r]);
//                 }
//             }
//         }

//         cout << mn[0][n - 1] << ' ' << mx[0][n - 1] << nl;
//     }

//     return 0;
// }
