#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int testCase;
    cin >> testCase;
 
    while (testCase--) {
 
        int length; cin >> length;

        vector<int> trace(length);

        for (int i = 0; i < trace.size(); i++) cin >> trace[i];

        for (int i = 0; i < trace.size(); i++){
            (trace[0] < trace[i]) ? trace[0] = trace[i],0:0;
        }
        vector<int> counts(trace[0], 0);
        string result(length, 'a');
 
        for (int i = 0; i < trace.size(); i++) {
            result[i] += counts[trace[i]];
            counts[trace[i]]++;
        }
        cout << result << endl;
    }

    return 0;
}