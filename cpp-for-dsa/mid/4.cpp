#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int totalMark;
};

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        Student a, b, c;

        cin >> a.id >> a.name >> a.section >> a.totalMark;
        cin >> b.id >> b.name >> b.section >> b.totalMark;
        cin >> c.id >> c.name >> c.section >> c.totalMark;

        Student bestStudent = a;

        if (b.totalMark > bestStudent.totalMark || (b.totalMark == bestStudent.totalMark && b.id < bestStudent.id))
        {
            bestStudent = b;
        }

        if (c.totalMark > bestStudent.totalMark || (c.totalMark == bestStudent.totalMark && c.id < bestStudent.id))
        {
            bestStudent = c;
        }

        cout << bestStudent.id << " " << bestStudent.name << " " << bestStudent.section << " " << bestStudent.totalMark << endl;
    }

    return 0;
}
