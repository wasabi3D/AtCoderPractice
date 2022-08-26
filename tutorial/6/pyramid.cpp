#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
using ll = long long;


int main(){
    ll N; cin >> N;

    vector<vector<ll>> known_pts(N);
    for(ll i = 0; i < N; i++){
        ll x, y, h; cin >> x >> y >> h;
        known_pts.at(i) = {x, y, h};
    }

    for(ll x = 0; x < 101; x++) for(ll y = 0; y < 101; y++){
        ll possible_H = 1;
        for(const vector<ll>& pt : known_pts){
            if(pt.at(2) > 0){
                possible_H = pt.at(2) + abs(x - pt.at(0)) + abs(y - pt.at(1));
            }
        }

        bool tests_passed = true;
        for(const vector<ll>& pt : known_pts){
            if(max(possible_H - abs(x - pt.at(0)) - abs(y - pt.at(1)), 0ll) != pt.at(2)){
                tests_passed = false;
            }
        }

        if(tests_passed){
            printf("%lld %lld %lld\n", x, y, possible_H);
            return 0;
        }
    }
}

