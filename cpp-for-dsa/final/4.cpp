#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string nm;
    int cls;
    string s;
    int id;
    int math_marks;
    int eng_marks;
};

bool compare(Student one, Student two)
{

    int totalMarkOne = one.math_marks + one.eng_marks;
    int totalMarkTwo = two.math_marks + two.eng_marks;

    if (totalMarkOne > totalMarkTwo)
    {
        return true;
    }
    else if (totalMarkOne < totalMarkTwo)
    {
        return false;
    }
    else
    {
        if (one.id < two.id)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int x;
    cin >> x;

    Student arr[x];

    for (int i = 0; i < x; i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }

    sort(arr, arr + x, compare);

    for (int i = 0; i < x; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << " " << endl;
    }

    return 0;
}
