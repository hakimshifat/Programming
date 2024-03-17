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

    int t;
    cin >> t;
    while (t--) {
        int sum = 0;
        int n;
        cin >> n;
        vector<int> num(2 * n);
        for (auto &x : num) {
            cin >> x;
        }
        while(n--){
            sort(num.begin(),num.end());
          sum +=  min(*num.begin(),*num.begin()+2);
            num.erase(num.begin(),num.begin()+2);
    }
    cout << sum<<endl;
    }

    return 0;
}
