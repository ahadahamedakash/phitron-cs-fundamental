#include <iostream>

using namespace std;

// int *p;

// void func()
// {
//     int x = 10;

//     p = &x;

//     cout << "FUNC: " << *p << endl;
//     return;
// }

int main()
{
    int x = 10;

    int *p = new int;

    *p = 100;

    // func();

    cout << *p << endl;

    return 0;
}