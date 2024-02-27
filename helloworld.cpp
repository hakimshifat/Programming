#include<bits/stdc++.h>
#define ll long long;
using namespace std;

int main()
{
    vector<char>temp;
    string s = "hello world";
     for(int k = 0 ;k<s.size();k++){
     for(int i = 'a' ; i <='s[k]' ; i++){
         cout << (char)i<<endl;
             temp.push_back(s[i]);
     }
    // for(int l = 0; l<temp.size();l++){
    //     cout << temp[l];
     }
  //  cout << "\n";
    
   // }

    return 0;
}