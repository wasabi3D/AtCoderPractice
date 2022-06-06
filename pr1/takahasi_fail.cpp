#include <iostream>
#include <vector>
#include <bitset>
using namespace std;


int main(){

    int N, K; cin >> N >> K;
    bitset<200> may_eat;
    bitset<200> hated_foods;
    may_eat = 0; hated_foods = 0;
    vector<int> foods(N);
    int max_val = -1;
    for(int i = 0; i < N; i++) {
        cin >> foods.at(i);
        if(foods.at(i) > max_val) max_val = foods.at(i);
    }
    for(int i = 0; i < K; i++){
        int index; cin >> index;
        hated_foods.flip(index);
    }
    for(int i = 0; i < N; i++){
        if(foods.at(i) == max_val) may_eat.flip(i + 1);
    }

    bitset<200> result = may_eat & hated_foods;
    if(result.any()) cout << "Yes\n";
    else cout << "No\n";
}