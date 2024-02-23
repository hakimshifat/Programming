#include<bits/stdc++.h>
#define ll long long;
using namespace std;

int shot(int bullet, int count,int health,int damage){
while(bullet != 0){
        health -= damage;
        count++;
        bullet--;
    }
    return count;
}

void solve(int t){
    int bullet;
    int damage;
    int regen;
    int health;
    int count=0;
    cin >> health >> damage >> bullet >> regen;

    // while(health>0){
    //     for(int i=0;i<bullet;i++){
    //         health = health - damage;
    //         count++;
    //         if(health <=0){
    //             break;
    //         }
    //     }
    //     if(health<=0){
    //         break;
    //     }
    //     else{
    //         health+=regen;
    //     }
    // }
    
    if(bullet == 0){
        health += regen;
    }
    if(count>100){
        cout << "Case " <<t<<": "<<-1<<"\n";
    }
    else{
        cout << "Case " <<t<<": "<<count<<"\n";
    }
}
int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        solve(i);
    }
    return 0;
}