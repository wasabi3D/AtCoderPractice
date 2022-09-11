#include <iostream>
#include <vector>
using namespace std;
using ll = long long;


int main(){
    ll N, M, T; cin >> N >> M >> T;
    vector<ll> A(N - 1);
    for(int i = 0; i < N - 1; i++) cin >> A.at(i);

    vector<pair<ll, ll>> bonus(M);
    for(int i = 0; i < M; i++){
        ll x, y; cin >> x >> y;
        bonus.at(i) = make_pair(x - 1, y);
    }

    ll cur_room = 0;
    ll bonus_pt = 0;
    while(cur_room < N - 1 && T > A.at(cur_room)){
        T -= A.at(cur_room);
        cur_room++;
        if(bonus.size() > bonus_pt && bonus.at(bonus_pt).first == cur_room){
            T += bonus.at(bonus_pt).second;
            bonus_pt++;
        }
    }

    if(cur_room == N - 1){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
}