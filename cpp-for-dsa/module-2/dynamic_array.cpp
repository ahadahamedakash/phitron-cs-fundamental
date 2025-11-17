#include <iostream>

using namespace std;

int main()
{
    // int a[5];
    int *a = new int[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        cout << a[i] << " ";
    }

    return 0;
}