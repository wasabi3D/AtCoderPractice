#include <iostream>
#include <vector>
using namespace std;


long factorial(const long& n){
    long ret = 1;
    for(int i = 1; i <= n; i++) ret *= i;
    return ret;
}


int main(){
    long P; cin >> P;
    long price = P;
    long total_coins = 0;
    vector<long> coins(10);
    for(int i = 0; i < 10; i++){
        coins.at(i) = factorial(10 - i);
    }

    for(long coin_type : coins){
        long used = min(100l, price / coin_type);
        total_coins += used;
        price -= used * coin_type;
        
    }

    cout << total_coins << endl;


}