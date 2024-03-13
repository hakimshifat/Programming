#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t; cin >> t;
    vector<int>k; int input;
    while(cin >> input){
        k.push_back(input);
    }
    for(auto x:k){
        cout << x<<endl;
    }
}