#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    vector<int>file;
    int count = 0;
    int count1 = 0;
    int input;
    while(t--){
        cin >> input;
        file.push_back(input);
    }
    for(int i=0;i<file.size();i++){
        if(file[i] == 1){
            count++;
        }
        else{
            continue;
        }
    }
    if(count>=1){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
    return 0;
}