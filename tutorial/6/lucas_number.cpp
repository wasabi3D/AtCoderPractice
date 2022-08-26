#include <iostream>
using namespace std;
using ll = long long;


int main(){
    ll N; cin >> N;

    ll l = 2, k = 1;
    for(int i = 0; i < N - 1; i++){
        ll old_k = k;
        k = l + k;
        l = old_k;
    }

    cout << k << endl;
}