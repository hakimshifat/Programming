#include <bits/stdc++.h>
using namespace std;


void solve()
{
    char a, b, c, d, e, f, g, h, i, k;
    int L;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
    if ((static_cast<int>(a) + static_cast<int>(b) + static_cast<int>(c)) != 198)
    {
        L = 198 - (static_cast<int>(a) + static_cast<int>(b) + static_cast<int>(c));
        if (L==2){
            cout<<"A\n";
        }
        else if(L==3){
            cout<<"B\n";
        }
        else{
            cout<<"C\n";
        }
    }
    else if((static_cast<int>(d) + static_cast<int>(e) + static_cast<int>(f)) != 198)
    {
        L = 198 - (static_cast<int>(d) + static_cast<int>(e) + static_cast<int>(f));
        if (L==2){
            cout<<"A\n";
        }
        else if(L==3){
            cout<<"B\n";
        }
        else{
            cout<<"C\n";
        }
    }
    else if ((static_cast<int>(g) + static_cast<int>(h) + static_cast<int>(i)) != 198)
    {
        L = 198 - (static_cast<int>(g) + static_cast<int>(h) + static_cast<int>(i));
        if (L==2){
            cout<<"A\n";
        }
        else if(L==3){
            cout<<"B\n";
        }
        else{
            cout<<"C\n";
        }
        
    }
}
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}