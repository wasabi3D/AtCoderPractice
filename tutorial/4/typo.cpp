#include <iostream>
using namespace std;


int main(){
    string S, T; cin >> S >> T;

    if(S == T){
        cout << "Yes\n";
        return 0;
    }

    for(int i = 0; i < S.size() - 1; i++){
        string tmpS = S;
        char c = tmpS.at(i);
        tmpS.at(i) = tmpS.at(i + 1);
        tmpS.at(i + 1) = c;
        if(tmpS == T){
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";
}