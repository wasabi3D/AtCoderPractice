#include <iostream>
#include <stdio.h>
using namespace std;
using ll = long long;


int main(){
    ll N, A, B, C; cin >> N >> A >> B >> C;
    constexpr ll MAX_COINS = 9999;

    ll mini = 99999;
    // A yen
    for(ll i = 0; i <= min(MAX_COINS, N / A); i++){

        // B yen
        for(ll j = 0; j <= min(MAX_COINS - i, N / B); j++){
            if(i * A + j * B > N){
                break;
            }

            // C yen
            ll rest = N - i * A - j * B;
            if(rest % C == 0){
                mini = min(mini, i + j + (rest / C));
            }
        }
    }

    cout << mini << endl;
}