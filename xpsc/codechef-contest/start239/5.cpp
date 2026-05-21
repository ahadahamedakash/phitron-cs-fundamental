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
//     t = 1;
//     cin >> t;

//     while (t--)
//     {
//         ll n, m, k;
//         cin >> n >> m >> k;

//         vector<ll> v(n);

//         ll totalFlower = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> v[i];
//             totalFlower += v[i];
//         }

//         // ll structureCapacity = k * (m / (k + 1)) + (m % (k + 1));
//         ll structureCapacity = m - (m / (k + 1));

//         cout << min(structureCapacity, totalFlower) << nl;
//     }

//     return 0;
// }

// /*
//     LINK: https://www.codechef.com/problems/ROSEPL
// */
