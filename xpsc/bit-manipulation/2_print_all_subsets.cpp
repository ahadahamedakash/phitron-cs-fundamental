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

int main()
{
    fastIO();

    vector<int> nums = {1, 2, 3};
    int n = nums.size();

    for (int mask = 0; mask < (1 << n); ++mask)
    {
        cout << "{ ";
        for (int i = 0; i < n; ++i)
        {
            if (mask & (1 << i))
            {
                cout << nums[i] << " ";
            }
        }

        cout << "}" << nl;
    }

    return 0;
}
