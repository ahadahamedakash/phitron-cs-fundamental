#include <bits/stdc++.h>

#define nl '\n'
#define spc ' '

#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN

#define ll long long int
#define ld long double

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define neg1 cout << "-1\n"

#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define dbg(x) cerr << #x << " = " << (x) << nl

#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

// Vector
using vint = vector<int>;
using vll = vector<ll>;

// Pair
using pii = pair<int, int>;
using pll = pair<ll, ll>;

// Vector of pairs
using vpii = vector<pii>;
using vpll = vector<pll>;

// Print vector
template <typename T>
void printv(const vector<T> &v)
{
    for (auto x : v)
        cout << x << spc;

    cout << nl;
}

void smash()
{
    int n;
    cin >> n;

    set<ll> st;

    for (int i = 1; i <= n; ++i)
    {
        ll x;
        cin >> x;
        st.insert(x - i);
    }

    vll v(all(st));

    int cnt = 1, ans = 1;
    for (int i = 1; i < sz(v); ++i)
    {
        if (v[i] == v[i - 1] + 1)
            cnt++;
        else
            cnt = 1;

        ans = max(ans, cnt);
    }

    cout << ans << nl;
}

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
        smash();

    return 0;
}

// #include <bits/stdc++.h>

// #define nl '\n'
// #define spc ' '

// #define imx INT_MAX
// #define imn INT_MIN
// #define llmx LLONG_MAX
// #define llmn LLONG_MIN

// #define ll long long int
// #define ld long double

// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define Yes cout << "Yes\n"
// #define No cout << "No\n"
// #define neg1 cout << "-1\n"

// #define sqr(x) ((x) * (x))
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()

// #define dbg(x) cerr << #x << " = " << (x) << nl

// #define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

// using namespace std;

// // Vector
// using vint = vector<int>;
// using vll = vector<ll>;

// // Pair
// using pii = pair<int, int>;
// using pll = pair<ll, ll>;

// // Vector of pairs
// using vpii = vector<pii>;
// using vpll = vector<pll>;

// // Print vector
// template <typename T>
// void printv(const vector<T> &v)
// {
//     for (auto x : v)
//         cout << x << spc;

//     cout << nl;
// }

// void smash()
// {
//     int n;
//     cin >> n;

//     set<ll> st;
//     for (int i = 0; i < n; ++i)
//     {
//         ll x;
//         cin >> x;
//         st.insert(x - (i + 1));
//     }

//     int p = 0;
//     auto helper = [&](int x)
//     {
//         if (x == 1)
//             return true;

//         int cnt = 1;
//         auto it = st.begin();
//         ll prev = *it;
//         ++it;

//         for (; it != st.end(); ++it)
//         {
//             ll curr = *it;

//             if (curr == prev + 1)
//                 cnt++;
//             else
//                 cnt = 1;

//             if (cnt >= x)
//                 return true;

//             prev = curr;
//         }

//         return false;
//     };

//     int l = 1, r = n, ans = 1;
//     while (l <= r)
//     {
//         int mid = l + (r - l) / 2;

//         if (helper(mid))
//         {
//             ans = mid;
//             l = mid + 1;
//         }
//         else
//         {
//             r = mid - 1;
//         }
//     }

//     cout << ans << nl;
// }

// int main()
// {
//     fastIO();

//     int tc;
//     cin >> tc;

//     while (tc--)
//         smash();

//     return 0;
// }
