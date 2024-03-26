#include<bits/stdc++.h>
using namespace std;

void solve(){
int t=0; cin >> t;
int common=0,spy=0;
vector<int>men;
int input;
for (int i = 0; i < t; i++)
{
    cin >> input;
    men.push_back(input);
}
for (int i = 0; i < t-1; i++)
{
    if(men[0] == men[i+1]){
        common = men[0];
    }
    else if(men[t-1] == men[i]){
        common = men[t-1];
    }
        }
for (int i = 0; i < t; i++)
{
    if(common != men[i])
    spy = i;
}

cout << spy+1 <<"\n";

}
int main()
{
    int testcase; cin >> testcase;
    while (testcase--)
    {
        solve();
    }
    
}