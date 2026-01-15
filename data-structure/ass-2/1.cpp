#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> s;
    queue<int> q;

    int stackSize, queueSize;

    cin >> stackSize >> queueSize;

    for (int i = 0; i < stackSize; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }

    for (int i = 0; i < queueSize; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (stackSize != queueSize)
    {
        cout << "NO\n";
        return 0;
    }

    bool flag = true;

    for (int i = 0; i < stackSize;)
    {
        if (s.top() == q.front())
        {
            s.pop();
            q.pop();
            i++;
        }
        else
        {
            flag = false;
            break;
        }
    }

    cout << (!flag ? "NO\n" : "YES\n");

    return 0;
}
