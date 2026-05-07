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
    vector<int> vn(n), vm(m);

    for (int &i : vn)
        cin >> i;
    for (int &i : vm)
        cin >> i;

    int l = 0, r = 0, cnt = 0;
    ;

    while (r < m)
    {
        if (l < n && vn[l] < vm[r])
        {
            cnt++, l++;
        }
        else
        {
            cout << cnt << " ";
            r++;
        }
    }

    return 0;
}

/*
    LINK: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B
*/
