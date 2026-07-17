#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

string a, b;
vector<int> v;

bool isPoss(int m)
{
    int s = sz(a);
    vector<bool> removed(s, false);

    for (int i = 0; i < m; ++i)
        removed[v[i] - 1] = true;

    int j = 0;
    for (int i = 0; i < s && j < sz(b); ++i)
        if (!removed[i] && a[i] == b[j])
            j++;

    return j == sz(b);
}

int main()
{
    fastIO();

    cin >> a >> b;
    for (int i = 0; i < sz(a); ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int l = 0, r = sz(a);
    while (l < r)
    {
        int mid = l + (r - l + 1) / 2;

        if (isPoss(mid))
            l = mid;
        else
            r = mid - 1;
    }

    cout << l << nl;

    return 0;
}

/*
    https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F
*/
