#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i, count = 0;
    string s;
    cin >> i;
    cin.ignore(); //ignores a buffer
    getline(cin, s);
       for (int k = 0; k < i; k++)
       {
           if (s[k] == s[k + 1])
           {
               count++;
           }
       } 
    cout << count;

    return 0;
}