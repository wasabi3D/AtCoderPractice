#include <vector>
#include <iostream>
#include <set>
using namespace std;


int main(){
    int N, W; cin >> N >> W;
    vector<int> weights(N);
    set<int> nums;
    for(int i = 0; i < N; i++) cin >> weights.at(i);

    for(int i = 0; i < N; i++){
        if(weights.at(i) <= W) nums.insert(weights.at(i));
        for(int j = i + 1; j < N; j++){
            if(weights.at(i) + weights.at(j) <= W) nums.insert(weights.at(i) + weights.at(j));
            for(int o = j + 1; o < N; o++){
                if(weights.at(i) + weights.at(j) + weights.at(o) <= W) nums.insert(weights.at(i) + weights.at(j) + weights.at(o));
            }
        }
    }

    cout << nums.size() << endl;
}