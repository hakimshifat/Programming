#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    int count = 0;
    vector<int>rooms_capacity;
    int input;
    while(cin>>input){
        rooms_capacity.push_back(input);
    }
    for(int i = 0;i<rooms_capacity.size();i+=2){
        if(rooms_capacity[i+1] - rooms_capacity[i] >=2){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}