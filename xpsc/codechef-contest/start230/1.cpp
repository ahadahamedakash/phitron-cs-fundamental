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
    if (n % 3 == 0)
        cout << "Yes" << nl;
    else
        cout << "No" << nl;

    return 0;
}

/*
    LINK: https://www.codechef.com/problems/EQBUY
*/
