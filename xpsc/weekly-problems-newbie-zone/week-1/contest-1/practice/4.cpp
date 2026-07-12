#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int N = 200000;
    vector<bool> isPrime(N, true);
    vector<int> primes;

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < N; i++)
        if (isPrime[i])
            for (ll j = 1LL * i * i; j < N; j += i)
                isPrime[j] = false;

    for (int i = 2; i < N; i++)
        if (isPrime[i])
            primes.push_back(i);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> ans(n);
        ans[0] = primes[0];

        for (int i = 1; i < n; i++)
            ans[i] = 1LL * primes[i - 1] * primes[i];

        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";

        cout << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/contest/2218/problem/D
*/
