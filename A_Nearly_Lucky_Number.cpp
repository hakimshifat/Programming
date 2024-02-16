#include<bits/stdc++.h>
#define ll long long;
using namespace std;

int main()
{
    string input;
    cin >> input;
    vector<int>k;
    int yes_C=0;
    int no_C=0;
    
    for(int i=0;i<input.size();i++){
        k.push_back(input[i]-'0');
    }
    for(int i=0;i<k.size();i++){
        if(k[i]==4 || k[i] == 7){
            yes_C++;
        }
        else{
            no_C++;
        }
    }
    if(yes_C == 4 || yes_C == 7){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}