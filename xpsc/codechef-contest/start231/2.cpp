#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

bool isImperfect(int n)
{
    if (n % 2 == 0 && n % 5 != 0)
        return true;
    else if (n % 5 == 0 && n % 2 != 0)
        return true;
    return false;
}

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << 1 << nl;
            continue;
        }

        bool res = isImperfect(n);

        if (res)
        {
            cout << 0 << nl;
            continue;
        }

        int lt = INT_MAX, rt = INT_MAX;

        for (int i = n - 1; i >= 1; i--)
        {
            if (isImperfect(i))
            {
                lt = i;
                break;
            }
        }

        for (int i = n + 1; i <= 100; i++)
        {
            if (isImperfect(i))
            {
                rt = i;
                break;
            }
        }

        int ltMin = lt != INT_MAX ? abs(n - lt) : INT_MAX;
        int rtMin = rt != INT_MAX ? abs(n - rt) : INT_MAX;

        cout << min(ltMin, rtMin) << nl;
    }

    return 0;
}
