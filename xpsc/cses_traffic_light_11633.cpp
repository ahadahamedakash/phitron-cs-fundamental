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

    ll x, n;
    cin >> x >> n;

    vector<ll> p(n);
    for (ll &i : p)
        cin >> i;

    set<ll> allLight;
    allLight.insert(0);
    allLight.insert(x);

    multiset<ll> gaps;
    gaps.insert(x);

    for (int i = 0; i < n; ++i)
    {
        int newLight = p[i];

        auto it = allLight.upper_bound(newLight);

        ll rightLight = *it;
        ll rightGap = rightLight - newLight;
        ll leftLight = *prev(it);
        ll leftGap = newLight - leftLight;

        ll oldGap = rightLight - leftLight;
        gaps.erase(gaps.find(oldGap));

        gaps.insert(leftGap);
        gaps.insert(rightGap);

        allLight.insert(newLight);

        cout << *gaps.rbegin() << " ";
    }

    return 0;
}

/*
    LINK: https://cses.fi/problemset/task/1163
*/
