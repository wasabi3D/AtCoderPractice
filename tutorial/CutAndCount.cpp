#include <iostream>
using namespace std;


bool does_contain(const string& s, const char& c){
    for(char tmp : s){
        if(tmp == c){
            return true;
        }
    }
    return false;
}


int count_common_chars(const string& s1, const string& s2){
    int counter = 0;
    for(char c = 'a'; c <= 'z'; c++){
        if(does_contain(s1, c) && does_contain(s2, c)){
            counter++;
        }
    }

    return counter;
}


int main(){
    int N; string S; cin >> N >> S;

    int max_ = -1;
    for(int i = 1; i < S.size(); i++){
        max_ = max(max_, count_common_chars(S.substr(0, i), S.substr(i, S.size() - i)));
    }

    cout << max_ << endl;
}