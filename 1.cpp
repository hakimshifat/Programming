#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];
    vector<int>m;
    cin>>s;
    for(int i=0;i<100;i+2){
        m.push_back(s[i]);
    }
   // sort(m.begin(),m.end());
    cout<<m.at(1)<<endl;
    return 0;
}