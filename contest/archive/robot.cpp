#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int N; string S; cin >> N >> S;
    vector<pair<int, bool>> persons(N);
    for(int i = 0; i < N; i++){
        int weight; cin >> weight;
        persons.at(i) = make_pair(weight, S.at(i) == '1');
    }

    sort(persons.begin(), persons.end());

    int max_correct = 0;
    for(pair<int, bool> some1 : persons){
        if(some1.second) max_correct += 1;
    }

    int cur = max_correct;
    for(int i = 0; i < N; i++){
        pair<int, bool> some1 = persons.at(i);
        if(!some1.second) cur++;
        else cur--;

        if((i < N - 1 && some1.first != persons.at(i + 1).first) || i == N - 1){
            max_correct = max(max_correct, cur);
        }
    }

    cout << max_correct << endl;


}