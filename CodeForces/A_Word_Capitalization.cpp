#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    getline(cin, s);
    if(s[0]>='a' && s[0]<='z'){
        s[0] = s[0] - 32;
        cout<<s;
    }
    else{
        cout<<s;
    }

    return 0;
}