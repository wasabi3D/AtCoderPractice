#include <iostream>
#include <vector>
using namespace std;


int main(){
    int N, X; cin >> N >> X;
    vector<int> m(N);
    int sum = 0;
    int min_ = 99999;
    for(int i = 0; i < N; i++){
        cin >> m.at(i);
        sum += m.at(i);
        if(min_ > m.at(i)) min_ = m.at(i);
    }
    
    int donuts = 0;

    // とりあえず全種類作る
    X -= sum;
    donuts += N;

    // 余ったもので一番安いのを作りまくる
    donuts += X / min_;

    cout << donuts << endl; 

}