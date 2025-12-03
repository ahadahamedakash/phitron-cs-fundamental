#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;

    while (x--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        int l1 = s1.length();
        int l2 = s2.length();

        for (int i = 0; i < l1; i++)
        {
            bool match = true;

            if (i + l2 <= l1)
            {
                for (int j = 0; j < l2; j++)
                {
                    if (s1[i + j] != s2[j])
                    {
                        match = false;
                        break;
                    }
                }
            }
            else
            {
                match = false;
            }

            if (match)
            {
                cout << '#';
                i += l2 - 1;
            }
            else
            {
                cout << s1[i];
            }
        }

        cout << endl;
    }

    return 0;
}
