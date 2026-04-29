
#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        bool isPossible = true;
        bool used = false;

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] <= v[i + 1])
            {
                used = false;
                continue;
            }

            if (used)
            {
                isPossible = false;
                break;
            }

            ll x = v[i] - v[i + 1];
            v[i] -= x;
            v[i + 1] += x;

            used = true;
        }

        cout << (isPossible ? "Yes" : "No") << nl;
    }

    return 0;
}

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
//         vector<ll> v(n);
//         for (int i = 0; i < n; i++)
//             cin >> v[i];

//         bool isPossible = true;
//         int bIdx = LLONG_MIN;

//         for (int i = 0; i < n - 1; i++)
//         {
//             if (v[i] > v[i + 1])
//             {
//                 if (i == bIdx + 1)
//                 {
//                     isPossible = false;
//                     break;
//                 }
//                 bIdx = i;
//             }
//         }

//         cout << (isPossible ? "Yes" : "No") << nl;
//     }

//     return 0;
// }
