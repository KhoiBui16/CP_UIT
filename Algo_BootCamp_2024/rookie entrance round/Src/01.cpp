#include <bits/stdc++.h>
#define ll long long
using namespace std;
void speed();

void solve()
{
    long long a, b;
    cin >> a >> b;
    if (a > b) {
        cout << "TRUE";
        return;
    }

    while (a < b) {
        a++;
        b--;
    }

    if (a == b) {
        cout << "FALSE";
    } else {
        cout << "TRUE";
    }
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