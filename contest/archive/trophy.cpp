#include <iostream>
#include <vector>
using namespace std;


int main(){
    long N, X; cin >> N >> X;
    vector<pair<long, long>> levels(min(N, X));

    for(long i = 0; i < N; i++){
        long a, b; cin >> a >> b;
        if(i < levels.size()){
            levels.at(i) = make_pair(a, b);
        }
    }

    long first_clear_time = 0;
    long minimum_time = -1;

    for(long i = 0; i < levels.size(); i++){
        first_clear_time += levels.at(i).first + levels.at(i).second;
        long tmp_total = first_clear_time + (X - i - 1) * levels.at(i).second;
        if(minimum_time == -1 || minimum_time > tmp_total){
            minimum_time = tmp_total;
        }
    }

    cout << minimum_time << endl;

}