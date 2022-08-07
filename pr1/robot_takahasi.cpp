#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int N; cin >> N;
    vector<pair<int, int>> ppl(N);
    int adult_cnt = 0;
    for(int i = 0; i < N; i++){
        char c; cin >> c;
        ppl.at(i) = make_pair(-1, c - '0');
        adult_cnt += c - '0';
    }
    for(int i = 0; i < N; i++){
        cin >> ppl.at(i).first;
    }

    sort(ppl.begin(), ppl.end());

    int count = adult_cnt;
    int act_max = count;
    for(int i = 0; i < N; i++){
        if(i != 0 && ppl.at(i - 1).first == ppl.at(i).first){
            if(ppl.at(i).second == 0){
                count++;
            }else{
                count--;
            }
        }else{
            act_max = max(act_max, count);

            if(ppl.at(i).second == 0){
                count++;
            }else{
                count--;
            }
            if(!(i < N - 1 && ppl.at(i).first == ppl.at(i + 1).first)){
                act_max = max(act_max, count);
            }
        }
    }
    act_max = max(act_max, count);

    cout << act_max << endl;

}