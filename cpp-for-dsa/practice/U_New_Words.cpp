#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int e = 0, g = 0, y = 0, p = 0, t = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'E' || s[i] == 'e')
        {
            e++;
        }
        else if (s[i] == 'G' || s[i] == 'g')
        {
            g++;
        }
        else if (s[i] == 'Y' || s[i] == 'y')
        {
            y++;
        }
        else if (s[i] == 'P' || s[i] == 'p')
        {
            p++;
        }
        else if (s[i] == 'T' || s[i] == 't')
        {
            t++;
        }
    }

    int minEgypt = min({e, g, y, p, t});

    cout << minEgypt << endl;

    return 0;
}
