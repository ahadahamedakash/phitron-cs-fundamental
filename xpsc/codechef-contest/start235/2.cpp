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
        string s;

        cin >> n >> s;
        int start = 0, end = n - 1;
        bool isUnique = true;

        while (start < end)
        {
            if (s[start] == '?' && s[end] == '?')
            {
                isUnique = false;
                break;
            }

            start++;
            end--;
        }

        int mid = n / 2;
        if (n % 2 != 0 && s[mid] == '?')
        {
            isUnique = false;
        }

        cout << (isUnique ? "YES" : "NO") << nl;
    }

    return 0;
}
