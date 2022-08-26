#include <iostream>
using namespace std;
using ll = long long;


int main(){
    ll N, K; cin >> N >> K;

    ll counter = 0;
    for(int a = 1; a <= N; a++){
        for(int b = K - a; b <= N; b++){
            if((b - a) % K == 0) counter++;
        }
    }

    cout << counter << endl;

    // b + c = mk
    // a + c = nk

    // (b + c) % k == 0 && (a + c) % k == 0

    // (b % k + c % k) % k = (b + c) % K = 0
    // (a % k + c % k) % k = 0

}