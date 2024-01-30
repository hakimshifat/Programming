    #include <bits/stdc++.h>
    using namespace std;

void print(char x){
        for(int i='a';i<='x';i++){
            cout<<static_cast<char>(i);
        }
    }
    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);

        //     for(int i='a';i<='h';i++){
        //     cout<<"\n"<<static_cast<char>(i);
        // }
        string s = "hello world";
        string s1;
        for(int k=0;k<s.size();k++){
           // cout<<s[k];
           s1[k] = s[k];
           cout<<s1[k];
           cout << "\n";
             print(s[k]);
            // cout<<"\n";
            

        }
        return 0;
    }

