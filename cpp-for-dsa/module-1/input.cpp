#include <iostream>

using namespace std;

int main()
{
    int x;

    cin >> x;

    cout << x << endl;
    cin.ignore();

    char s[100];

    cin.getline(s, 100);

    cout << s << endl;

    //

    string t;

    cin >> t;

    cout << t << endl;

    return 0;
}