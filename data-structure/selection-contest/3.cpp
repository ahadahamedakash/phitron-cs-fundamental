#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x;
    cin >> x;

    double com = x * 0.2;

    long long cour = (long long)ceil(100.0 / com);

    cout << cour;

    return 0;
}
