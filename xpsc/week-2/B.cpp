#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
        cin >> dq[i];

    int sereja = 0, dima = 0;
    bool serejaTurn = true;

    int l = 0, r = n - 1;
    while (!dq.empty())
    {
        int left = dq.front(), right = dq.back(), mx;
        mx = max(left, right);

        if (serejaTurn)
            sereja += mx;
        else
            dima += mx;

        if (mx == left)
            dq.pop_front();
        else
            dq.pop_back();

        serejaTurn = !serejaTurn;
    }

    cout << sereja << ' ' << dima << nl;

    return 0;
}

/*
// OPTIMIZED:
int main()
{
    fastIO();

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int sSum = 0;
    int dSum = 0;

    bool serejaTurn = true;

    int l = 0, r = n - 1;

    while (l <= r)
    {
        int pick;

        if (v[l] > v[r])
            pick = v[l++];
        else
            pick = v[r--];

        if (serejaTurn)
            sSum += pick;
        else
            dSum += pick;

        serejaTurn = !serejaTurn;
    }

    cout << sSum << ' ' << dSum << nl;

    return 0;
}
*/

/*
int main()
{
    fastIO();

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int sSum = 0;
    int dSum = 0;

    bool flag = false;

    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        if (v[l] > v[r])
        {
            if (!flag)
            {
                sSum += v[l];
                flag = true;
                l++;
            }
            else
            {
                dSum += v[l];
                flag = false;
                l++;
            }
        }
        else if (v[l] < v[r])
        {
            if (!flag)
            {
                sSum += v[r];
                flag = true;
                r--;
            }
            else
            {
                dSum += v[r];
                flag = false;
                r--;
            }
        }
        else
        {
            if (!flag)
            {
                sSum += v[l];
                flag = true;
                l++;
            }
            else
            {
                dSum += v[l];
                flag = false;
                l++;
            }
        }
    }

    cout << sSum << ' ' << dSum << nl;

    return 0;
}
*/

/*
    LINK: https://codeforces.com/problemset/problem/381/A
*/
