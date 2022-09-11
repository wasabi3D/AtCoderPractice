#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


int main(){
    int N; cin >> N;
    vector<string> strs(N); 
    for(int i = 0; i < N; i++){
        string s; cin >> s; sort(s.begin(), s.end());
        strs.at(i) = s;
    }


    map<string, long long> count;
    for(string s : strs){
        count[s]++;
    }

    long long counter = 0;
    for(auto p : count){
        counter += (p.second) * (p.second - 1) / 2;
    }

    cout << counter << endl;
}