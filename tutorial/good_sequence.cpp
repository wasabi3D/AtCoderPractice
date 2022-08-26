#include <iostream>
#include <map>
using namespace std;
using ll = long long;


int main(){
    ll N; cin >> N;
    map<ll, ll> numbers;

    for(int i = 0; i < N; i++){
        ll n; cin >> n;
        if(numbers.find(n) != numbers.end()){
            numbers[n]++;
        }else{
            numbers[n] = 1ll;
        }
    }

    ll counter = 0;
    for(auto num : numbers){
        if(num.second < num.first){
            counter += num.second;
        }else{
            counter += num.second - num.first;
        }
    }

    cout << counter << endl;
}