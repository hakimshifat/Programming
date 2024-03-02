#include<bits/stdc++.h>
using namespace std;

int main()
{
    int input, t; cin >> t;
    int sum = 0;
    vector<int>trum;
    vector<int>capt;
    while(cin>>input){
        trum.push_back(input);
    }
    for(int i = 0;i<trum.size()-1;i+=2){
        sum = sum + trum[i+1] - trum[i];
     //   cout << sum <<" "<<endl ;
        capt.push_back(sum);
    }
    for(auto x:capt){
        cout << capt[x];
    }
    return 0;
}