#include<bits/stdc++.h>
#define ll long long;
using namespace std;

int main()
{
    string s;
    string s1;
    getline(cin,s);
    getline(cin,s1);
    reverse(s.begin(),s.end());
    
    if(s==s1){
        cout<<"YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}