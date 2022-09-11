#include <iostream>
#include <vector>
#include <tuple>
using namespace std;


int main(){
    int N; cin >> N;
    vector<int> p(N);
    for(int i = 0; i < N; i++) cin >> p.at(i);

    vector<int> count(N, 0);

    for(int j = 0; j < N; j++){
        for(int off = -1; off <= 1; off++){
            int target = p.at((j + off + N) % N);
            count.at((target - j + N) % N)++;
        }
    }

    int mx = 0;
    for(int c : count) mx = max(mx, c);

    cout << mx << endl;

}