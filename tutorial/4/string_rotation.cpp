#include <iostream>
using namespace std;


string rotate_str(string str){
    string new_str = "";
    new_str += str.at(str.size() - 1);
    new_str += str.substr(0, str.size() - 1);
    return new_str;
}


int main(){
    string S, T; cin >> S >> T;

    for(int i = 0; i < S.size(); i++){
        S = rotate_str(S);
        if(S == T){
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";
}