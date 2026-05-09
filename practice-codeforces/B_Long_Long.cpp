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

        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        int operation = 0;
        ll sum = 0;
        bool isNegSeg = false;

        for (int i = 0; i < n; ++i)
        {
            if (v[i] > 0)
            {
                isNegSeg = false;
                sum += v[i];
            }
            else
            {
                if (!isNegSeg && v[i] < 0)
                {
                    operation++;
                    isNegSeg = true;
                }

                sum += abs(v[i]);
            }
        }

        cout << sum << " " << operation << nl;
    }

    return 0;
}

// int main()
// {
//     fastIO();

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         int operation = 0;
//         ll sum = 0;
//         bool isNegSeg = false;

//         int x;
//         for (int i = 0; i < n; ++i)
//         {

//             cin >> x;
//             if (x > 0)
//             {
//                 isNegSeg = false;
//                 sum += x;
//             }
//             else
//             {
//                 if (!isNegSeg && x < 0)
//                 {
//                     operation++;
//                     isNegSeg = true;
//                 }

//                 sum += abs(x);
//             }
//         }

//         cout << sum << " " << operation << nl;
//     }

//     return 0;
// }

/*
    LINK: https://codeforces.com/problemset/problem/1843/B
*/
