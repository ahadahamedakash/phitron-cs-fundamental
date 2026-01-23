#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;

    cin >> n >> k;

    long long dis = k / n;

    long long rem = k % n;

    cout << dis << " " << rem << endl;

    return 0;
}
