/*

Author : Shifat

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("1941A_input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t, result = 0;
    cin >> t;

    while (t--) {
        int left, right, sum;
        cin >> left >> right >> sum;

        vector<int> leftCoin(left);
        for (int i = 0; i < left; ++i){
            cin >> leftCoin[i];
        }

        vector<int> rightCoin(right);
        for (int i = 0; i < right; ++i){
            cin >> rightCoin[i];
        }

        // stl sorting

        sort(leftCoin.begin(), leftCoin.end());
        sort(rightCoin.begin(), rightCoin.end());

        //actual code

        for(int i = 0;i<leftCoin.size();i++){
            for(int k=0;k<rightCoin.size();k++){
                if(leftCoin[i] + rightCoin[k] < sum){
                    result++;
                }
            }
        }
        cout << result << endl;
        result = 0;

        // below code is for seeing input insertion correctly

        // for(int i=0;i<leftCoin.size();i++){
        //     cout << leftCoin[i]<<" ";
        // }
        // cout << endl;
        // for(int i=0;i<rightCoin.size();i++){
        //     cout << rightCoin[i]<<" ";
        // }

        // cout << endl;
    }

    return 0;
}
