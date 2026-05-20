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

//         priority_queue<ll> pq;

//         ll total = 0;

//         for (int i = 0; i < n; i++)
//         {
//             ll x;
//             cin >> x;
//             pq.push(x);
//             total += x;
//         }

//         ll used = 0;

//         while (!pq.empty())
//         {
//             vector<ll> temp;
//             ll cnt = 0;

//             while (cnt < k && !pq.empty())
//             {
//                 ll x = pq.top();
//                 pq.pop();
//                 if (x > 0)
//                 {
//                     used++;
//                     x--;
//                     if (x > 0)
//                         temp.push_back(x);
//                 }
//                 cnt++;
//             }

//             for (ll x : temp)
//                 pq.push(x);

//             if (cnt == 0)
//                 break;
//         }

//         cout << min({used, m, total}) << nl;
//     }

//     return 0;
// }

/*
    LINK: https://www.codechef.com/problems/ROSEPL
*/
