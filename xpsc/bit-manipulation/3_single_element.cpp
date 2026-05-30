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

    vector<int> nums = {4, 1, 2, 1, 2};

    int xOr = 0;

    for (int i = 0; i < nums.size(); ++i)
        xOr ^= nums[i];

    cout << xOr << nl;

    return 0;
}
