#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;


int main(){
    ll N, M; cin >> N >> M;
    vector<pair<ll, ll>> shops(N);

    for(int i = 0; i < N; i++){
        ll price, stock; cin >> price >> stock;
        shops.at(i) = make_pair(price, stock);
    }

    sort(shops.begin(), shops.end());

    ll cost = 0;
    int shop_index = 0;
    while(M > 0){
        if(M > shops.at(shop_index).second){
            cost += shops.at(shop_index).first * shops.at(shop_index).second;
            M -= shops.at(shop_index).second;
            ++shop_index;
        }else{
            cost += M * shops.at(shop_index).first;
            M = 0;
        }
    }

    cout << cost << endl;
}