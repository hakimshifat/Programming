#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int num, t; 
    cin >> num >> t;
    string arr;
    cin >> arr;
    
    while (t--) {
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] == 'B' && arr[i + 1] == 'G') {
                swap(arr[i], arr[i + 1]);
                i++;
            }
        }
    }
    
    cout << arr << endl;
    return 0;
}
