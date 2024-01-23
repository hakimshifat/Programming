#include <bits/stdc++.h>
using namespace std;

void solve()
{
    double total_run, c_run_rate, rem_balls;
    
    cin >> total_run >> c_run_rate >> rem_balls;

    double ball_played = 300 - rem_balls;
    double r1 = (c_run_rate/ball_played)*6;
    double r2 = ((total_run-c_run_rate+1)/rem_balls) * 6 ;

    printf("%0.2lf %0.2lf",r1, r2);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}