#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
    int N; cin >> N;
    map<string, int> strs;

    for(int i = 0; i < N; i++){
        string s; cin >> s;
        if(strs.find(s) != strs.end()){
            strs[s]++;
        }else{
            strs[s] = 1;
        }
    }

    int max_n = 0;
    for(auto p : strs){
        max_n = max(max_n, p.second);
    }

    vector<string> ans(0);
    for(auto p : strs){
        if(p.second == max_n) ans.push_back(p.first);
    }

    sort(ans.begin(), ans.end());

    for(string s : ans) cout << s << endl;
}