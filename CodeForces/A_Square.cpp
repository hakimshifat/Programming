// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     int work ;
//     int sum = 0;
//     int coordinates[8*t];
//     for(int i=0;i<t*8;i++){
//         cin >> coordinates[i]; //input function
//     }

//     for(int i=0;i<t*8;i+=8){
//     if(coordinates[i] == coordinates[i+2]){ //finding match
//       //  work = i + 2; // index of matching element
//         sum = abs(coordinates[i+1]-coordinates[i+3]);
//         break;
//     }
//     else if(coordinates[i] == coordinates[i+4]){
//        // work = i + 4;
//         sum = abs(coordinates[i+1]-coordinates[i+5]);
//         break;
//     }
//     else if(coordinates[i] == coordinates[i+6]){
//        // work = i + 6;
//         sum = abs(coordinates[i+1]-coordinates[i+7]);
//         break;
//     }
//     cout <<  ;
//   //  sum = pow((coordinates[i]-coordinates[work]),2) + pow((coordinates[i+1]-coordinates[work+1]),2);
//   //  cout << sum << endl;
//     }
//     return 0;
// }

Solution:

#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll x1, x2, x3, x4, y1, y2, y3, y4;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    ll area = 1;

    if (x1 == x2)
    {
        area = area * abs(y2 - y1);
    }
    else if (x1 == x3)
    {
        area = area * abs(y3 - y1);
    }
    else if (x1 == x4)
    {
        area = area * abs(y4 - y1);
    }
    else if (x2 == x3)
    {
        area *= abs(y3 - y2);
    }
    else if (x2 == x4)
    {
        area *= abs(y4 - y2);
    }
    else if (x3 == x4)
    {
        area *= abs(y4 - y3);
    }

    if (y1 == y2)
    {
        area = area * abs(x2 - x1);
    }
    else if (y1 == y3)
    {
        area = area * abs(x3 - x1);
    }
    else if (y1 == y4)
    {
        area = area * abs(x4 - x1);
    }
    else if (y2 == y3)
    {
        area *= abs(x3 - x2);
    }
    else if (y2 == y4)
    {
        area *= abs(x4 - x2);
    }
    else if (y3 == y4)
    {
        area *= abs(x4 - x3);
    }

    cout << area << nline;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }

}