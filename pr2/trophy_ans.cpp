#include <iostream>
#include <vector>
using namespace std;


int main(){
    long N, X; cin >> N >> X;
    vector<pair<long, long>> stages(min(N, X));
    for(long i = 0; i < N; i++){
        long a, b; cin >> a >> b;
        if(i < stages.size()){
            stages.at(i) = make_pair(a, b);
        }
    }

    long minimum = -1;
    long all_once = 0;
    for(long i = 0; i < stages.size(); i++){
        all_once += stages.at(i).first + stages.at(i).second;
        long remain = X - (i + 1);
        long tmp_ans = all_once + remain * stages.at(i).second;
        
        if(minimum == -1 || minimum > tmp_ans){
            minimum = tmp_ans;
        }
    }

    cout << minimum << endl;
}