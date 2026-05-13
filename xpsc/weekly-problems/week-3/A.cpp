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
    vector<int> v(n + 1), cnt(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    set<int> st;
    for (int i = n; i > 0; i--)
    {
        st.insert(v[i]);
        cnt[i] = st.size();
    }

    for (int i = 1; i <= m; i++)
    {
        int pos;
        cin >> pos;

        cout << cnt[pos] << nl;
    }

    return 0;
}
