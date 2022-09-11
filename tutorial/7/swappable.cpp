#include <iostream>
#include <map>
#include <vector>
using namespace std;
using ll = long long;


int main(){
    ll N; cin >> N;
    map<ll, ll> numbers;

    for(ll i = 0; i < N; i++){
        ll n; cin >> n;

        if(numbers.find(n) != numbers.end()){
            numbers[n]++;
        }
        else{
            numbers[n] = 1;
        }
    }

    ll combinations = (N * (N - 1)) / 2;
    ll duplicates = 0;
    for(auto num : numbers){
        duplicates += (num.second * (num.second - 1)) / 2;
    }

    cout << combinations - duplicates << endl;
}