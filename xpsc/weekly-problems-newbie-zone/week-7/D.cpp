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

const int maxN = (1LL << 15);

bool isPalindrome(int x)
{
    string s = to_string(x);
    int len = s.size();
    for (int i = 0; i < len / 2; ++i)
        if (s[i] != s[len - i - 1])
            return false;

    return true;
}

vector<int> allPal;
void markPalindrome()
{
    for (int i = 0; i < maxN; ++i)
        if (isPalindrome(i))
            allPal.push_back(i);
}

int main()
{
    fastIO();

    int t;
    t = 1;
    cin >> t;

    markPalindrome();

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), cnt(maxN + 1);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            cnt[v[i]]++;
        }

        ll ans = n;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < allPal.size(); ++j)
            {
                int curr = v[i] ^ allPal[j];
                ans += cnt[curr];
            }
        }

        cout << ans / 2 << nl;
    }

    return 0;
}
