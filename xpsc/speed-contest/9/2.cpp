#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define even cout << "EVEN\n"
#define odd cout << "ODD\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int binaryDigitSum(int n)
{
    int sum = 0;

    while (n > 0)
    {
        sum += n % 2;
        n /= 2;
    }

    return sum;
}

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        int total = binaryDigitSum(n);

        if (total % 2 == 0)
            even;
        else
            odd;
    }

    return 0;
}
