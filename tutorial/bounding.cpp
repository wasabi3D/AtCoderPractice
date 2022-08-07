#include <iostream>
#include <vector>
using namespace std;


int main(){
    long long N, X; cin >> N >> X;

    vector<long long> L(N), bounces(N + 1, 0);
    for(int i = 0; i < N; i++) cin >> L.at(i);

    for(int i = 1; i < N + 1; i++) bounces.at(i) = bounces.at(i - 1) + L.at(i - 1);
    
    for(int i = 0; i < bounces.size(); i++){
        if(bounces.at(i) > X){
            cout << i << endl;
            return 0;
        }
    }

    cout << bounces.size() << endl;
}