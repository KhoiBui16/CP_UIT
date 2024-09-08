#include <bits/stdc++.h>
#define ll long long
using namespace std;
void speed();

bool check(int tre_trung, int xinh_dep, int co_gau, int giau_co)
{
    if (tre_trung == 1 && xinh_dep == 0)
        return false;

    if (xinh_dep == 1 && co_gau == 0)
        return false;

    if (xinh_dep == 0 && co_gau == 1 && giau_co == 0)
        return false;

    return true;
}

void solve()
{
    int tre_trung, xinh_dep, co_gau, giau_co;
    cin >> tre_trung >> xinh_dep >> co_gau >> giau_co;
    cout << check(tre_trung, xinh_dep, co_gau, giau_co);
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