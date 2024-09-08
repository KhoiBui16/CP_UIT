#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll mod = 1000000007;

ll binPow(ll a, ll b) {
    if (b == 0)
        return 1;
    ll half = binPow(a, b / 2);
    half = (half * half) % mod;
    if (b % 2 != 0)
        return (half * (a % mod)) % mod;
    return half;
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    cout << binPow(a, b) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}