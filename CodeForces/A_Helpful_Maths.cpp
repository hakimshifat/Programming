#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>k;
    int input;
    while(cin >> input){
        k.push_back(input);
    }
    sort(k.begin(),k.end());
    for(int i=0;i<k.size();i++){
        cout << k[i];
        if(i != k.size()-1){
            cout << "+";
        }
    }
    return 0;
}