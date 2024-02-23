#include<bits/stdc++.h>
using namespace std;

void solve(){
int a,b,c;
cin >> a >> b >> c;
if((a+b==c) || (b+c==a) || (a+c==b)){
    cout << "YES" << endl;
}
else{
    cout<< "NO" << endl;
}
}

int main(){
    int i;
    cin >> i;
    while(i--){
        solve();
    }
    return 0;
}