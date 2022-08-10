#include <iostream>
using namespace std;


int main(){
    int A, B; cin >> A >> B;
    string S; cin >> S;

    for(int i = 0; i < A + B + 1; i++){
        if(i == A && S.at(i) != '-'){
            cout << "No\n";
            return 0;
        }else if(i != A && !('0' <= S.at(i) && S.at(i) <= '9')){
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
}