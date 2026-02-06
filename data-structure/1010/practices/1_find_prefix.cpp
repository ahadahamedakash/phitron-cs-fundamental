#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    string prefix = "";
    string ans;

    while (t--)
    {
        string word;

        cin >> word;

        if (prefix == "")
        {
            prefix = word;
        }
        else
        {
            for (int i = 0; i < prefix.length(); i++)
            {
                if (prefix[i] != word[i])
                    ans = "";
                else
                    ans.push_back(word[i]);
            }
        }
    }

    cout << ans << endl;

    return 0;
}
