#include <iostream>
using namespace std;


int main(){
    string S;
    cin >> S;

    int cnt = 0;
    for(int i = 0; i < S.size() / 2; i++){
        cnt += (S.at(i) != S.at(S.size() - i - 1));
    }

    cout << cnt << endl;
}