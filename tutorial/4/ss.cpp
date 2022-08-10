#include <iostream>
using namespace std;


bool is_ss(const string& str){
    if(str.size() % 2 == 1) return false;

    string left = str.substr(0, str.size() / 2);
    string right = str.substr(str.size() / 2, str.size() / 2);

    return right == left;
}


int main(){

    string S; cin >> S;

    for(int len = S.size() - 1; len > 0; len--){
        if(is_ss(S.substr(0, len))){
            cout << len << endl;
            return 0;
        }
    }
}