#include <bits/stdc++.h>
#define ll long long
using namespace std;
void speed();


void solve()
{
    string s; cin >> s;
    stack<char> st;
    for (char c : s)
    {
        if (!st.empty() && st.top() == c)
            st.pop();
        else
            st.push(c);
    }
    cout << st.size();
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