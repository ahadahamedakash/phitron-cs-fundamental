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
//         int n;
//         cin >> n;
//         vector<int> a(n), b(n);
//         int minIdx = INT_MAX, minVal = INT_MAX, total = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> a[i];
//             total += a[i];
//         }

//         for (int i = 0; i < n; ++i)
//         {
//             cin >> b[i];
//             if (b[i] < minVal)
//             {
//                 minVal = b[i];
//                 minIdx = i;
//             }
//         }

//         total -= a[minIdx];
//         total += b[minIdx];

//         cout << total << nl;
//     }

//     return 0;
// }
