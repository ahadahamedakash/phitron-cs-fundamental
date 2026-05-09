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
    vector<int> vn(n);
    vector<int> vm(m);

    for (int &i : vn)
        cin >> i;
    for (int &i : vm)
        cin >> i;

    int l = 0, r = 0;
    ll ans = 0;
    while (l < n && r < m)
    {
        int curr = vn[l], cnt1 = 0, cnt2 = 0;
        while (l < n && vn[l] == curr)
            cnt1++, l++;

        while (r < m && curr > vm[r])
            r++;

        while (r < m && vm[r] == curr)
            cnt2++, r++;

        ans += (1LL * cnt1 * cnt2);
    }

    cout << ans << nl;

    return 0;
}

/*
    LINK: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
*/
