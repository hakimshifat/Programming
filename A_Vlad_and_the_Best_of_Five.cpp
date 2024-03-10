#include<bits/stdc++.h>
using namespace std;

int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int t = 0; cin >> t;
  while(t--){
    int A_count = 0, B_count = 0;
    string s; cin >> s; 
 //   cout << s<<endl;
    for (int i = 0; i < s.size(); i++)
    {
      if(s[i] == 'A'){
        A_count++;
      }
      else if(s[i]=='B'){
        B_count++;
      }
    }
    if(A_count>B_count){
        cout << 'A'<<endl;
      }
      else{
        cout<< 'B'<<endl;
      }
    
  }
  return 0;
}