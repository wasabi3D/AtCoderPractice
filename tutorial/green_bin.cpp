#include <iostream>
#include <map>
#include <vector>
using namespace std;


map<char, int> count_chars(string s){
    map<char, int> ret;
    for(char c = 'a'; c <= 'z'; c++) ret[c] = 0;
    for(char c : s) ret[c]++;
    return ret;
}


int main(){
    int N; cin >> N;
    vector<map<char, int>> strs(N);
    for(int i = 0; i < N; i++){
        string s; cin >> s;
        strs.at(i) = count_chars(s);
    }

    long long counter = 0;
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(strs.at(i) == strs.at(j)){
                counter++;
            }
        }
    }

    cout << counter << endl;
}