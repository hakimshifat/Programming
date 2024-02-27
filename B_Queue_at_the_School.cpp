#include<bits/stdc++.h>
#define ll long long;
using namespace std;

int main()
{
    int num, t ; cin >> num >> t;
    string arr;
    cin >> arr;

    for(int i=0;i<arr.size();i++){
        if(arr[i] == 'B'){
            if(arr[i+1] == 'G'){
                char temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    for(int i=0;i<arr.size();i++){
        cout << arr[i];
    }
    return 0;
}