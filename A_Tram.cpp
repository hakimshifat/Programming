#include<bits/stdc++.h>
#define ll long long;
using namespace std;

int main()
{
    int t; cin >> t;
    vector<int>trum;
    vector<int>capacity{0};
    while(t--){
        int input;
        int j;
        while(cin >> input){
            trum.push_back(input);
        }
        for(int i=0;i<trum.size();i++){
            cout  << trum[i]<<" ";
        }
        
        // for(int i = 0, j = 0;i<trum.size();i+=2,j++){
        //     capacity[j] = capacity[j] + trum[i+1] - trum[i];
        //     if(i > 0){
        //         capacity[j] = capacity[j] + capacity[j-1];
        //     }
        // }
      //  sort(capacity.begin(),capacity.end());
        // for(int i=0;i<capacity.size();i++){
        //     cout << capacity[i] << " ";
        // }
        
    }
    return 0;
}