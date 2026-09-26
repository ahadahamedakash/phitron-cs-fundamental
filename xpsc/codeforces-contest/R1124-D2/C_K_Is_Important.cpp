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
//     int n, k;
//     cin >> n >> k;

//     vll v(n);
//     ll total = 0;
//     for (auto &i : v)
//     {
//         cin >> i;
//         total += i;
//     }

//     if (k == n)
//     {
//         cout << max(v[0], v[n - 1]) << nl;
//         return;
//     }

//     ll w = 0;
//     for (int i = 0; i < k - 1; ++i)
//         w += v[i];

//     ll mn = w;
//     for (int i = k - 1; i < n; ++i)
//     {
//         w += v[i];
//         w -= v[i - (k - 1)];

//         mn = min(mn, w);
//     }

//     cout << total - mn << '\n';
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
