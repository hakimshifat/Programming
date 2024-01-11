#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i, max, min, count = 0;
    cin >> i;
    int j[i];
    for (int num = 0; num < i; num++){
        cin >> j[num];
    }
    max = j[0];
    for (int num = 0; num < i; num++){
        if (j[num] > max) {
            max = j[num];
            count++;
        }
    }
    min = j[0];
    for (int num = 0; num < i; num++){
        if (j[num] < min){
            min = j[num];
            count++;
        }
    }
   // cout << count1;

       cout << count ;
    return 0;
}