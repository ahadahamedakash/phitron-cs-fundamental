#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string a = "", b = "";

        bool aOpen = false;
        bool bOpen = false;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                if (aOpen)
                {
                    a.push_back(')');
                    b.push_back(')');
                }
                else
                {
                    a.push_back('(');
                    b.push_back('(');
                }
            }
            else
            {
                if (aOpen)
                {
                    a.push_back(')');
                    b.push_back('(');
                }
                else
                {
                    a.push_back('(');
                    b.push_back(')');
                }
            }
        }
    }

    return 0;
}
