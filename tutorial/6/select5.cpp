#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
#define rep(i, n, p) for(ll i = p; i < n; i++)


int main(){
    ll N, P, Q; cin >> N >> P >> Q;
    vector<ll> a(N);

    for(int i = 0; i < N; i++) cin >> a.at(i);

    int counter = 0;
    rep(i, N, 0) rep(j, N, i + 1) rep(k, N, j + 1) rep(l, N, k + 1) rep(m, N, l + 1){
        counter += ((((a.at(i) * a.at(j) % P) * a.at(k) % P) * a.at(l) % P) * a.at(m) % P) == Q;
    }   

    cout << counter << endl;
}