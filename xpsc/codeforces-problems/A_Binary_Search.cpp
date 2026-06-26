#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    for (int i = 0; i < k; ++i)
    {
        int l = 0, r = n - 1, mid, key;
        bool isFound = false;
        cin >> key;

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (v[mid] == key)
            {
                isFound = true;
                break;
            }
            else if (key < v[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }
        if (isFound)
            yes;
        else
            no;
    }

    return 0;
}

/*
    LInk: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A
*/
