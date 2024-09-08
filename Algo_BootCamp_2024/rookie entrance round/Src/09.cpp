#include <bits/stdc++.h>
using namespace std;

struct TEAM
{
    int goad_for = 0, goad_against = 0, yellow_card = 0;
};

void solve()
{
    vector<TEAM> teams(2); 
    vector<int> points(2, 0), goal_difference(2, 0);  
    int goad_for, goad_against, yellow_card;

    for (int i = 0; i < 6; i++) {
        cin >> goad_for >> goad_against >> yellow_card;

        int team_idx = i / 3;  

        teams[team_idx].goad_for += goad_for;
        teams[team_idx].goad_against += goad_against;
        teams[team_idx].yellow_card += yellow_card;

        goal_difference[team_idx] += (goad_for - goad_against);

        if (goad_for > goad_against)
            points[team_idx] += 3; 
        else if (goad_for == goad_against)
            points[team_idx] += 1;  
    }

    int idx = 0;
    if (points[1] > points[0] ||
        (points[1] == points[0] && goal_difference[1] > goal_difference[0]) ||
        (points[1] == points[0] && goal_difference[1] == goal_difference[0] && teams[1].goad_for > teams[0].goad_for) ||
        (points[1] == points[0] && goal_difference[1] == goal_difference[0] && teams[1].goad_for == teams[0].goad_for && teams[1].yellow_card < teams[0].yellow_card)) {
            idx = 1;
    }

    cout << points[idx] << " " << goal_difference[idx] << " " << teams[idx].goad_for << " " << teams[idx].yellow_card << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}