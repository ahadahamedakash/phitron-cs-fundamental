#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    stack<char> st;

    int str_size = s.size();

    for (char c : s)
    {
        if (c == '(')
            st.push(')');
        else if (c == '{')
            st.push('}');
        else if (c == '[')
            st.push(']');
        else
        {
            if (st.empty() || st.top() != c)
            {
                cout << "Invalid" << endl;
                return 0;
            }
            st.pop();
        }
    }

    if (st.empty())
        cout << "Valid" << endl;

    // for (int i = 0; i < str_size; i++)
    // {
    //     if (s[i] == '(' || s[i] == '{' || s[i] == '[')
    //     {
    //         st.push(s[i]);
    //     }
    //     else
    //     {
    //         if (st.empty())
    //         {
    //             cout << "Invalid";
    //             return 0;
    //         }

    //         if (st.top() == '(' && s[i] == ')' || st.top() == '{' && s[i] == '}' || st.top() == '[' && s[i] == ']')
    //         {
    //             st.pop();
    //         }
    //         else
    //         {
    //             cout << "Invalid";
    //             return 0;
    //         }
    //     }
    // }

    // if (st.empty())
    // {
    //     cout << "Valid";
    // }
    // else
    // {
    //     cout << "Invalid";
    // }

    return 0;
}
