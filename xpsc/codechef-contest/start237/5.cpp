// #include <bits/stdc++.h>
// #define ll long long int
// #define all(x) x.begin(), x.end()
// #define nl '\n'
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

//         int one = 0, zero = 0, neg = 0;

//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             if (x == 1)
//                 one++;
//             else if (x == 0)
//                 zero++;
//             else
//                 neg++;
//         }

//         int distinct = (one > 0) + (zero > 0) + (neg > 0);

//         if (distinct == 1)
//         {
//             if (zero)
//                 cout << 0 << "\n";
//             else if (one)
//                 cout << 1 << "\n";
//             else
//                 cout << -1 << "\n";
//         }
//         else
//         {
//             if (zero > 0)
//                 cout << 0 << "\n";
//             else
//                 cout << -1 << " " << 0 << "\n";
//         }
//     }

//     return 0;
// }
