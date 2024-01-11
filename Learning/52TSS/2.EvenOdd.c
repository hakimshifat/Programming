#include <stdio.h>
#include <string.h>

void solve(){
     char k[100];
     scanf("%s", k);
        int n = strlen(k);
        int m = k[n - 1];
        if ((m % 2) == 0) {
            printf("even\n");
        }
        else{
            printf("odd\n");
        }

}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        solve();
    }
    return 0;
}
