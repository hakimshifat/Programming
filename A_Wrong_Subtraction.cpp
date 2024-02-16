#include<bits/stdc++.h>
#define ll long long;
using namespace std;

int substractor(int i, int k){
    for(int m = 0; m<k;m++){
    if((i%10) != 0){
        i = i - 1; 
    }
    else{
        i = i / 10;
    }
    }
    return i;
}

int main()
{
    int i,k;
    cin >> i >> k;
    int result = substractor(i,k);
    
    cout << result;
    return 0;
}