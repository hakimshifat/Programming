/*

Author : Shifat
JUDGE_ID : 378432RR

*/
#include <bits/stdc++.h>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int sum = 0;
    int t; cin >> t;
    if(t>0){
        for (int i = 1; i <= t; ++i)
        {
            sum += i;
        }
    }
    else{
        for (int i = t; i <= 1; ++i)
        {
            sum += i;
        }
    }
    cout << sum;
    
    return 0;
}
