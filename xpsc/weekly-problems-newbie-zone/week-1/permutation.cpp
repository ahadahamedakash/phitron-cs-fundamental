#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

void generate(string s, int idx)
{
    if (idx == s.size())
    {
        cout << s << nl;
        return;
    }

    for (int i = idx; i < s.size(); i++)
    {
        swap(s[idx], s[i]);   // choose
        generate(s, idx + 1); // explore
        swap(s[idx], s[i]);   // backtrack
    }
}

int main()
{
    fastIO();

    string s = "123";
    generate(s, 0);

    return 0;
}
