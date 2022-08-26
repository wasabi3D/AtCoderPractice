#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


map<char, int> count_chars(string s){
    map<char, int> ret;
    for(char c = 'a'; c <= 'z'; c++) ret[c] = 0;

    for(char c : s) ret[c]++;

    return ret;
}



int main(){
    int N; cin >> N;

    vector<map<char, int>> strs;
    for(int i = 0; i < N; i++){
        string s; cin >> s;
        strs.push_back(count_chars(s));
    }

    map<char, int> minimums;
    for(char c = 'a'; c <= 'z'; c++){
        int mini = 99999;
        for(map<char, int>& str : strs){
            mini = min(mini, str[c]);
        }

        minimums[c] = mini;
    }

    string ans = "";
    for(char c = 'a'; c <= 'z'; c++){
        ans += string(minimums[c], c);
    }

    cout << ans << endl;

}