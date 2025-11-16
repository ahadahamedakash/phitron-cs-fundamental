#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    cout << min(a, b) << endl;
    cout << max(a, b) << endl;

    cout << min({3, 5, 8, 10}) << endl;
    cout << max({3, 5, 8, 10}) << endl;

    swap(a, b);

    cout << a << " " << b;

    return 0;
}
