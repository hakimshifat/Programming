/*

Author : Shifat
JUDGE_ID : 378432RR

*/
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

       int num, n1=0, n2=1, nextTerm;

    printf("Enter a number:");
    scanf("%d",&num);

    printf("Fibonacci series until %d:\n",num);
    printf("%d\t %d\t",n1,n2);

    nextTerm=n1+n2;
    while(nextTerm<=num)
    {
        printf("%d\t",nextTerm);
        n1=n2;
        n2=nextTerm;
        nextTerm=n1+n2;
    }
    printf("\n");

    return 0;
}
