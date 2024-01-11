#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

   int i;
   cin >> i;
   if(i%5==0){
    cout << i/5;
   }
   else{
    cout<<i/5+1;
   }
    return 0;
}