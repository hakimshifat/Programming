#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;
    int cost, banana, much;
    cin >> cost >> banana >> much;
    for(int i=1;i<=much;i++){
        sum += i * cost;
    }
    if((sum - banana) < 0){
        cout << '0';
    }
    else{
        cout << sum - banana;
    }
    return 0;
}