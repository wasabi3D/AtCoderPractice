#include <iostream>
using namespace std;


int main(){
    string S; cin >> S;
    for(char test = 'a'; test <= 'z'; test++){
        int cnt = 0;
        for(char ch : S) cnt += ch == test;
        if(cnt == 1){
            cout << test << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}