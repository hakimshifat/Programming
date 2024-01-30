#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int year;
    cin >> year;

    while(1){
        year++;
        int a = year / 1000;
        int b = year / 100 % 10;
        int c = year / 10 % 10;
        int d = year % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << year;
    return 0;
}