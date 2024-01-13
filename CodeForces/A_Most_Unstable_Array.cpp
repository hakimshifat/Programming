#include <bits/stdc++.h>
using namespace std;
void solve(){
int m, n;
cin >> m >> n;
if(m==1){
    cout << 0<<"\n";
}
else if(m ==2){
    cout << n<<"\n";
}
else{
    cout<< 2*n<<"\n";
}

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