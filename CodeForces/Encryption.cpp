#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){ //Reversing
        s[i] = s[i] + 3; 
    }
    string s1=s;
    for(int l=0, i=s.size();i>=0;i--,l++){
        s1[l] = s[i];
    }   
    for(int i=(s1.size()/2);i<s1.size();i++){
        s1[i] = s1[i] + 1;
    }
    cout << s1 << endl;
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