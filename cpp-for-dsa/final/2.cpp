#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    bool hasJessica = false;
    while (ss >> word)
    {
        int length = word.length();
        for (int i = 0; i < length; i++)
        {
            if (i + 6 < length && word.length() == 7)
            {
                if (word[i] == 'J' && word[i + 1] == 'e' && word[i + 2] == 's' && word[i + 3] == 's' && word[i + 4] == 'i' && word[i + 5] == 'c' && word[i + 6] == 'a')
                {
                    hasJessica = true;
                    break;
                }
            }
        }
    }

    if (hasJessica)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
