#include <iostream>
#include <map>
using namespace std;
using ll = long long;


int main(){
    int N; cin >> N;
    map<ll, int> numbers;

    for(int i = 0; i < N; i++){
        ll num; cin >> num;
        if(numbers.find(num) != numbers.end()){
            if(numbers[num] > 0ll){
                numbers[num] = 0ll;
            }else{
                numbers[num] = 1ll;
            }
        }
        else{
            numbers[num] = 1ll;
        }
    }

    int counter = 0;
    for(auto p : numbers){
        counter += p.second > 0ll;
    }

    cout << counter << endl;
}