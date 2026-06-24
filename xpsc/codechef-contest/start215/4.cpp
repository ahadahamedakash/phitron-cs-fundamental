#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int oneCnt = 0, zeroCnt = 0;
        for (char c : s)
            if (c == '1')
                oneCnt++;
            else
                zeroCnt++;

        bool isPossible = true;

        for (int i = 0; i < k; ++i)
        {
            char cur;
            if (oneCnt >= zeroCnt)
            {
                cur = '1';
                oneCnt--;
            }
            else
            {
                cur = '0';
                zeroCnt--;
            }

            if (oneCnt < 0 || zeroCnt < 0)
            {
                isPossible = false;
                break;
            }

            for (int j = i + k; j < n; j += k)
            {
                cur = (cur == '0' ? '1' : '0');
                if (cur == '1')
                    oneCnt--;
                else
                    zeroCnt--;

                if (oneCnt < 0 || zeroCnt < 0)
                {
                    isPossible = false;
                    break;
                }
            }
        }

        if (isPossible)
            yes;
        else
            no;
    }

    return 0;
}
