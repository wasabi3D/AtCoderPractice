#include <iostream>
#include <map>
using namespace std;


int main(){
    int N, M; cin >> N >> M;
    map<int, int> foods;
    for(int f = 1; f <= 30; f++) foods[f] = 0;

    for(int i = 0; i < N; i++){
        int K; cin >> K;
        for(int j = 0; j < K; j++){
            int food_id; cin >> food_id;
            foods[food_id]++;
        }
    }

    int counter = 0;
    for(auto food : foods){
        if(food.second == N){
            counter++;
        }
    }

    cout << counter << endl;
}