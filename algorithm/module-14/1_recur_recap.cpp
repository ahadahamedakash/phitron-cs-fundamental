#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

void rec(int n)
{
    if (n > 5)
        return;

    rec(n + 1);
    cout << n << " ";
}

int main()
{
    fastIO();

    rec(1);

    return 0;
}
