#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, n;
    
    srand(time(0));
    
    printf("How many random numbers do you want to generate? ");
    scanf("%d", &n);
    
    printf("Random numbers:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", rand()));
    }
    
    return 0;
}
