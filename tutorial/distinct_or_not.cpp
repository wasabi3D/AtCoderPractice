#include <iostream>
#include <map>
using namespace std;
using ll = long long;


int main(){
    ll N; cin >> N;
    map<ll, int> nums;

    for(ll i = 0; i < N; i++){
        ll n; cin >> n;

        if(nums.find(n) != nums.end()){
            nums[n]++;
        }else{
            nums[n] = 1;
        }
    }

    bool ok = true;
    for(auto item : nums){
        if(item.second > 1){
            ok = false;
        }
    }

    cout << (ok ? "YES" : "NO") << endl;
}