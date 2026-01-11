#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q;

    int x;
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
