// #include <bits/stdc++.h>
// #define ll long long int
// #define all(x) x.begin(), x.end()
// #define nl '\n'
// #define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

// using namespace std;

// bool helper(int x, int y, int z)
// {
//     vector<int> v = {x, y, z};
//     sort(all(v));

//     while (v[0] >= 0 && v[1] >= 0 && v[2] >= 0)
//     {
//         bool changed = false;

//         if (v[2] >= 3)
//         {
//             if (v[0] > 1)
//             {
//                 v[2] -= 3;
//                 v[0] -= 1;
//                 changed = true;
//             }
//             else if (v[0] > 0)
//             {
//                 v[2] -= 3;
//                 v[0] -= 1;
//                 changed = true;
//             }
//         }
//         else if (v[2] >= 2)
//         {
//             if (v[0] > 1)
//             {
//                 v[2] -= 2;
//                 v[0] -= 1;
//                 changed = true;
//             }
//             else if (v[0] > 0)
//             {
//                 v[2] -= 2;
//                 v[0] -= 1;
//                 changed = true;
//             }
//         }

//         sort(all(v));

//         if (!changed)
//             break;
//     }

//     return (v[0] == 0 && v[1] == 0 && v[2] == 0);
// }

// // bool helper(int x, int y, int z)
// // {
// //     vector<int> v = {x, y, z};
// //     sort(all(v));

// //     while (v[0] >= 0 && v[1] >= 0 && v[2] > 0)
// //     {
// //         if (v[2] >= 3)
// //         {
// //             if (v[0] > 1)
// //             {
// //                 v[2] -= 3;
// //                 v[0] -= 1;
// //             }
// //             else if (v[2] > 1)
// //             {
// //                 v[2] -= 3;
// //                 v[0] -= 1;
// //             }
// //         }
// //         else if (v[2] >= 2)
// //         {
// //             if (v[0] > 1)
// //             {
// //                 v[2] -= 2;
// //                 v[0] -= 1;
// //             }
// //             else if (v[2] > 1)
// //             {
// //                 v[2] -= 2;
// //                 v[0] -= 1;
// //             }
// //         }
// //         sort(all(v));
// //     }
// //     for (int val : v)
// //         cout << val << " ";
// //     cout << nl;
// //     return (v[0] == 0) && (v[1] == 0) && (v[2] == 0);
// // }

// int main()
// {
//     fastIO();

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;

//         cout << (helper(a, b, c) ? "YES" : "NO") << nl;
//     }

//     return 0;
// }
