#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string nm;
    int cls;
    string s;
    int id;
};

int main()
{
    int x;
    cin >> x;

    Student arr[x];

    for (int i = 0; i < x; i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id;
    }

    int secCount = x - 1;

    for (int i = 0; i < x; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[secCount].s << " " << arr[i].id << endl;
        secCount--;
    }

    return 0;
}
