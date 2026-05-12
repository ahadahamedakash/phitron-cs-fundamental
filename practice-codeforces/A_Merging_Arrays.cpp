#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n, m;
    cin >> n >> m;
    vector<ll> v1(n), v2(m);
    vector<ll> res;
    res.reserve(n + m);

    for (ll &i : v1)
        cin >> i;
    for (ll &i : v2)
        cin >> i;

    ll p1 = 0, p2 = 0;

    while (p1 < n && p2 < m)
    {
        if (v1[p1] < v2[p2])
        {
            res.push_back(v1[p1]);
            p1++;
        }
        else if (v1[p1] > v2[p2])
        {
            res.push_back(v2[p2]);
            p2++;
        }
        else
        {
            res.push_back(v1[p1]);
            res.push_back(v2[p2]);
            p1++, p2++;
        }
    }

    while (p1 < n)
    {
        res.push_back(v1[p1]);
        p1++;
    }

    while (p2 < m)
    {
        res.push_back(v2[p2]);
        p2++;
    }

    for (ll val : res)
        cout << val << " ";

    return 0;
}

/*
    LINK: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
*/
