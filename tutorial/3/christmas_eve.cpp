#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;


int main(){
    ll N, K; cin >> N >> K;
    vector<ll> h(N);
    for(ll i = 0; i < N; i++) cin >> h.at(i);

    sort(h.begin(), h.end());

    ll min_ = 99999999999;
    for(ll i = 0; i <= h.size() - K; i++){
        ll tmp = h.at(i + (K - 1)) - h.at(i);
        if(tmp < min_) min_ = tmp;
    }

    cout << min_ << endl;
}