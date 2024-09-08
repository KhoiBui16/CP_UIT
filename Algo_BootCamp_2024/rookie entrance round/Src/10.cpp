#include <bits/stdc++.h>
#define ll long long
#define v64 vector<long long>
using namespace std;

struct S {
    string name;
    int electoral_vote;
    int popular_vote;
    int mn;
};

void sol()
{
    int n; cin >> n;
    vector<S> a(n);
    ll total = 0;
    for (int i=0; i<n; i++)
    {
        cin >> a[i].name >> a[i].electoral_vote >> a[i].popular_vote;
        total += a[i].electoral_vote;
        a[i].mn = a[i].popular_vote/2+1;
    }
    v64 dp(total+1, INT64_MAX);
    dp[0] = 0;
    for (auto x: a)
        for (int j = total; j>=x.electoral_vote; j--)
            if (dp[j - x.electoral_vote] != INT64_MAX)
                dp[j] = min(dp[j], dp[j-x.electoral_vote] + x.mn);
    ll ans = INT64_MAX;
    for (int i=total/2+1; i<=total; i++) ans = min(ans, dp[i]);
    cout << ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    sol();

    return 0;
}