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

string convertToBinary(int n)
{
    if (n == 0)
        return "0";

    string ans = "";
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            ans += '1';
        }
        else
            ans += '0';
        n /= 2;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

ll convertToDecimal(string binary)
{
    ll decimal = 0;

    for (char bit : binary)
        decimal = decimal * 2 + (bit - '0');

    return decimal;
}

int main()
{
    fastIO();

    string bin = convertToBinary(18);
    cout << "BIN: " << bin << nl;

    ll dec = convertToDecimal("1101");
    cout << "DEC: " << dec << nl;

    // int a = 10, b = 5;

    // a = a ^ b;
    // cout << "AFT a = a ^ b: " << a << " - " << b << nl;
    // b = a ^ b;
    // cout << "AFT b = a ^ b: " << a << " - " << b << nl;

    // a = a ^ b;
    // cout << "AFT a = a ^ b: " << a << " - " << b << nl;

    cout << __popcount(18) << nl;

    int start = 10, goal = 7;

    int temp = (start ^ goal);

    cout << "MIN BIT FLIP: " << __popcount(temp) << nl;

    return 0;
}
