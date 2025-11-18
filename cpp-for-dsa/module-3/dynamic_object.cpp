#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, int gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    Student rahim(45, 5, 3.2);
    Student *karim = new Student(10, 5, 2.33);

    cout << karim->cls << " " << karim->roll << " " << karim->gpa << endl;

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;

    return 0;
}
