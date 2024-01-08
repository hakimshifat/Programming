#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> i;
    vector<int> j;
    i.push_back(10);
    i.push_back(20);
    i.push_back(30);
    i.push_back(40);
    i.push_back(50);

    j.push_back(1);
    j.push_back(2);
    j.push_back(3);
    j.push_back(4);
    j.push_back(5);

    cout << "\nBefore swapping\n";

    for (int l = 0; l < j.size(); l++)
    {
        cout << j[l] << " ";
    }

    for (int l = 0; l < i.size(); l++)
    {
        cout << i[l] << " ";
    }
    cout << "\nAfter swapping\n";
    swap(i, j);
    for (int l = 0; l < j.size(); l++)
    {
        cout << j[l] << " ";
    }

    for (int l = 0; l < i.size(); l++)
    {
        cout << i[l] << " ";
    }

    return 0;
}