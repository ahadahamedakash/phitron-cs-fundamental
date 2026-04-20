#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    string s;
    cin >> s;

    if (s[0] == 's' || s[3] == 's')
        cout << "Yes" << nl;
    else
        cout << "No" << nl;

    return 0;
}

/*
    LINK: https://www.codechef.com/problems/SSNK
*/
