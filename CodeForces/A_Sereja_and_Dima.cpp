#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    int turn = 1;
    int s_sum = 0, d_sum = 0;
    cin >> num;
    vector<int> cards(num);

    for (int i = 0; i < num; i++) {
        cin >> cards[i];
    }

    while (!cards.empty()) {
        if(turn == 1){
        if(*(cards.begin()) > cards.back()){
            s_sum += *(cards.begin());
            // d_sum += cards.back();
            cards.erase(cards.begin());
        }
        else{
            s_sum += cards.back();
            cards.pop_back();
        }
    
    
    turn++;
        }
        else{
            if(*(cards.begin()) > cards.back()){
            d_sum += *(cards.begin());
            cards.erase(cards.begin());
            
        }
        else{
            d_sum += cards.back();
            cards.pop_back();
        }
        
        
        turn = 1;
        }
        
    }
    cout << s_sum <<" "<<d_sum;
    return 0;
}
