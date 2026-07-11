#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define ld long double
#define ll long long int
#define no cout << "No\n"
#define yes cout << "Yes\n"
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n;
    cin >> n;

    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    bool hasPos = false;
    for (int val : v)
    {
        if (val >= 0)
        {
            hasPos = true;
            break;
        }
    }

    if (hasPos)
        no;
    else
        yes;

    return 0;
}
