#include <iostream>
#include <algorithm>
using namespace std;


int calculate_score(string s){
    int ret = 0;

    for(char c : s){
        ret += c;
    }

    return ret;
}


int main(){
    string s, t; cin >> s >> t;

    // int score_s = calculate_score(s), score_t = calculate_score(t);
    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), greater<char>());

    cout << (s < t ? "Yes\n" : "No\n");
}