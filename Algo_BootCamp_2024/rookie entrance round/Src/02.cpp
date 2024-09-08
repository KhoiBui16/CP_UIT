#include <bits/stdc++.h>
#define ll long long
using namespace std;
void speed();

ll gcd(long a, long b)
{
    while (b != 0){
        long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ll lcm(long a, long b)
{
    return a / gcd(a, b) * b;

}

void solve()
{
    long a, b;
    cin >> a >> b;
    cout << gcd(a, b) << " " << lcm(a, b);
}

int main()
{
    speed();
    solve();
    return 0;
}

void speed()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
}