// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> arr;
//         if (n % 2 == 0)
//         {
//             int start = n / 2;

//             while (start >= 1)
//             {
//                 arr.push_back(start);
//                 start--;
//             }
//             int start2 = n / 2;
//             while (n > start2)
//             {
//                 arr.push_back(n);
//                 n--;
//             }
//             for (int i = 0; i < arr.size(); i++)
//             {
//                 cout << arr[i] << " ";
//             }
//             cout << endl;
//         }
//         else
//         {
//             int start = n / 2 + 1;

//             while (start >= 1)
//             {
//                 arr.push_back(start);
//                 start--;
//             }
//             int start2 = n / 2 + 1;
//             while (n > start2)
//             {
//                 arr.push_back(n);
//                 n--;
//             }
//             for (int i = 0; i < arr.size(); i++)
//             {
//                 cout << arr[i] << " ";
//             }
//             cout << endl;
//         }
//     }
// }

#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        for (int i = n; i > 0; --i)
            cout << i << " ";

        cout << nl;
    }

    return 0;
}

/*
    LINK: https://www.codechef.com/problems/CYCLICMIN
*/
