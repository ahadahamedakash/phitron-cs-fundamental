#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s)
{
    int first = 0;
    int last = s.size() - 1;

    while (first < last)
    {
        while (first < last && !isalnum(s[first]))
            first++;
        while (first < last && !isalnum(s[last]))
            last--;

        if (tolower(s[first++]) != tolower(s[last--]))
        {
            return false;
        }

        // first++;
        // last--;
    }

    return true;
}

int main()
{
    cout << isPalindrome("A man, a plan, a canal: Panama");

    return 0;
}

// Link: https://leetcode.com/problems/valid-palindrome/
