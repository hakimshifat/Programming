/*

Author : Shifat
JUDGE_ID : 378432RR

*/
#include <bits/stdc++.h>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n ; cin >> n;

    for(int i = 0;i < n;i++){
        for(int l = 0;l<i;l++){
       //     if(l != 0){
            printf(" ");
      //  }
        }
        for(int j = 0;j<n;j++){
        printf("*");
    }
    printf("\n");
    }
    return 0;
}
