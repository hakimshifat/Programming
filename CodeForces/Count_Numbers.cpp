#include <bits/stdc++.h>
using namespace std;

void solve()
{
    char line[] = {1,2,3,4,5};
  //  cin >> line;
    char *p, *e;
    int count = 0;
    long int input;
    for(*p = line[] ; ; p = e){
        input = strtol(p, &e, 10);
            if (p == e){
                break;
            }
            count++;
    }
    cout << count;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}