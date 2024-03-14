#include<bits/stdc++.h>
using namespace std;

int main()
{
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
int input = 0;
int left = 0, right = 0, sum = 0;
int t = 0; cin >> t;
while(t--){
cin >> left >> right >> sum ;
vector<int>leftCoin;
while(left--){
cin >> input;
leftCoin.push_back(input);
}
vector<int>RightCoin;
while(right--){
cin >> input;
RightCoin.push_back(input);
}
vector<int>denominator;
cout << "\n";
cout << left<<" "<< right<<" "<< sum<<" "<< leftCoin.size()<<" "<< RightCoin.size()<<endl;
}
return 0;
}