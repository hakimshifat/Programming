#include <bits/stdc++.h>
using namespace std;

long long int factorial(int input){
    long long int sum = 1;
    input++;
    while(input--){
         sum = sum*input;
         if(input == 1)
         break;
    }
    return sum;
}

void solve()
{
    int input;
    scanf("%d",&input);
    long long int result = factorial(input);
    printf("%lld\n",result);
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