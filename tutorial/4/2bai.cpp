#include <iostream>
using namespace std;


bool is_numeric(string S){
    for(char c : S){
        if(!('0' <= c && c <= '9')){
            return false;
        }
    }

    return true;
}


int main(){
    string S; cin >> S;

    if(is_numeric(S)){
        int tot = 0;
        int mult = 100;
        for(char c : S){
            tot += mult * (c - '0');
            mult /= 10;
        }

        cout << tot * 2 << endl;
    }else{
        cout << "error\n";
    }
}