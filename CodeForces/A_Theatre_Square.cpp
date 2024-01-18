#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,x,y;
    scanf("%lld %lld %lld", &a, &b, &c);
    if(a%c==0){
        x = a/c;
    }
    else{
        x = (a/c)+1;
    }
    if(b%c==0){
        y = b/c;
    }
    else{
        y = (b/c)+1;
    }
    printf("%lld",x*y);
    return 0;
}