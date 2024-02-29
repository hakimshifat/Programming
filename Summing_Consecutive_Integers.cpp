#include<bits/stdc++.h>
#define ll long long;
using namespace std;

int factorial(int N) {
    int product = 1;
    for (int j = 1; j <= N; j++)
        product *= j;
    return product;
}

int main()
{
    vector<int>k;
    int A; cin >> A;
    k.push_back(A);

    while(cin >> A){
        if(A>0){
            k.push_back(A);
        }
    }
    int sum = 0;
    for(int i=0;i<k.size();i++){
        sum += k[i];
    }

    int fact = factorial(k[0]);
    cout << fact +(k[0]-k[1])<<endl;
    return 0;
}