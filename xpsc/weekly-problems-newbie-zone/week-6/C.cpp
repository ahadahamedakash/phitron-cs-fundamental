#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        stack<char> st;
        for (char c : s)
        {
            if (!st.empty() && st.top() == c)
                st.pop();
            else
                st.push(c);
        }

        if (st.empty() == 0)
            yes;
        else
            no;
    }

    return 0;
}
