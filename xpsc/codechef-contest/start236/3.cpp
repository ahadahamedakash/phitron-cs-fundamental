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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int lt = 0, rt = n - 1;
        bool isPalindrome = true;

        while (lt < rt)
        {
            if (v[lt] == v[rt])
            {
                lt++, rt--;
            }
            else if (v[lt] == k)
            {
                lt++;
            }
            else if (v[rt] == k)
            {
                rt--;
            }
            else
            {
                isPalindrome = false;
                break;
            }
        }
        cout << (isPalindrome ? "Yes" : "No") << nl;
    }

    return 0;
}
