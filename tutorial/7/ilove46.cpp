#include <iostream>
#include <map>
#include <vector>
using namespace std;
using ll = long long;


int main(){
    ll N; cin >> N;
    map<ll, ll> a, b, c;
    for(ll i = 0; i < 46; i++){
        a[i] = 0ll; b[i] = 0ll; c[i] = 0ll;
    }
    for(int i = 0; i < N; i++){
        ll n; cin >> n;
        a[n % 46] += 1;
    }
    for(int i = 0; i < N; i++){
        ll n; cin >> n;
        b[n % 46] += 1;
    }
    for(int i = 0; i < N; i++){
        ll n; cin >> n;
        c[n % 46] += 1;
    }

    ll cnt = 0;
    for(ll i = 0; i < 46; i++){
        for(ll j = 0; j < 46; j++){
            for(ll k = 0; k < 46; k++){
                if((i + j + k) % 46 == 0){
                    cnt += a[i] * b[j] * c[k];
                }
            }
        }
    }

    cout << cnt << endl;
}