#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int N, K; cin >> N >> K;
    vector<int> l(N);

    for(int i = 0; i < N; i++) cin >> l.at(i);

    sort(l.begin(), l.end(), greater<int>());

    int sum = 0;
    for(int i = 0; i < K; i++){
        sum += l.at(i);
    }

    cout << sum << endl;
}