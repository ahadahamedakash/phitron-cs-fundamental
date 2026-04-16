#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n, m;
    cin >> n >> m;
    map<string, string> mpName;

    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        mpName[ip] = name;
    }

    for (int i = 0; i < m; i++)
    {
        string cmd, ip;
        cin >> cmd >> ip;

        ip.pop_back();

        cout << cmd << " " << ip << "; #" << mpName[ip] << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/contest/918/problem/B
*/
