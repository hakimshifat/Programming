#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input, t; 
    cin >> t;
    int sum = 0;
    vector<int> trum;
    vector<int> array;

    while (cin >> input) {
        trum.push_back(input);
    }

    for (int i = 0; i < trum.size() - 1; i += 2) {
        sum += trum[i + 1] - trum[i];
        array.push_back(sum);
    }
    sort(array.begin(),array.end(), greater<int>());
    cout<< array[0];

    return 0;
}
