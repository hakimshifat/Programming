#include<bits/stdc++.h>
using namespace std;

int main() {
    string hlw; cin >> hlw;
    string searchingElement = "hello";

    int j = 0;
    for (int i = 0; i < hlw.size(); i++) {
        if (hlw[i] == searchingElement[j]) {
            j++;
        }
    }
    if (j == searchingElement.size()){
                cout<<"YES";
            }
                else{
                    cout << "NO";
                }

    return 0;
}
