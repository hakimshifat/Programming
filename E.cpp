#include<bits/stdc++.h>
using namespace std;

bool isLeapYear(int year)
{
if (year % 400 == 0) return true;
else if(year % 100 == 0) return false;
else if(year % 4 == 0) return true;
else return false;
}
void solve(int t){
    int a , b ,c ,d; cin >> a >> b >> c >> d;
    int count = 0;
    if((a == 29)&&(b == 2)){
    for(int i=c+1;i<=d;i++){
        if(isLeapYear(i) == 1){
            count++;
        }
    }
        cout <<"Case "<<t<<": " <<count<<"\n";
    }
    else{
        cout <<"Case "<<t<<": " <<d-c<<"\n";
    }
}
int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        solve(i);
    }
    
    return 0;
}