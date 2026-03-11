#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int fact(int n)
{
    if (n == 1)
        return 1;

    int an = fact(n - 1);
    return n * an;
}

int main()
{
    fastIO();

    cout << fact(5);

    return 0;
}
