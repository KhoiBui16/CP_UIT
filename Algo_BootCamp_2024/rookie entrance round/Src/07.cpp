#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    if ((a == 6 && b <= 4) || (b == 6 && a <= 4))
        cout << 1;
    else if ((a == 7 && (b == 5 || b == 6)) || (b == 7 && (a == 5 || a == 6)))
        cout << 1;
    else
        cout << 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}