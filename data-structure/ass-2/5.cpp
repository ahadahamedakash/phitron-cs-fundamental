#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> route;
    string s;

    while (cin >> s)
    {
        if (s == "end")
            break;
        route.push_back(s);
    }

    int query;
    cin >> query;

    auto current = route.begin();

    while (query--)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string address;
            cin >> address;

            auto it = find(route.begin(), route.end(), address);

            if (it != route.end())
            {
                current = it;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            auto temp = current;
            temp++;

            if (temp != route.end())
            {
                current = temp;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (current != route.begin())
            {
                current--;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
