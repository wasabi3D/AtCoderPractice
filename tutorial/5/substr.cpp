#include <iostream>
using namespace std;


int calculate_diff(const string& s1, const string& s2){
    int counter = 0;
    for(int i = 0; i < s1.size(); i++){
        counter += s1.at(i) != s2.at(i);
    }

    return counter;
}


int main(){
    string S, T; cin >> S >> T;

    int minimum = 9999999;
    for(int i = 0; i <= S.size() - T.size(); i++){
        minimum = min(minimum, calculate_diff(S.substr(i, T.size()), T));
    }

    cout << minimum << endl;
}