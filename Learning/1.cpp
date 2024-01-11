#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<int>a;
    int size;
    cout <<"Enter the size\n";
    cin >>size;
    for(int i=0;i<size;i++){
        int k;
        cin>>k;
        a.push_back(k);
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<"->";
    }
    cout<<"End"<<endl;
}

int main()
{
    solve();
    return 0;
}