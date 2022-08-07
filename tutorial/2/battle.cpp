#include <iostream>
using namespace std;


int main(){
    int A, B, C, D; cin >> A >> B >> C >> D;

    int takahashi = A, aoki = C;

    while(takahashi > 0 && aoki > 0){
        // takahashi's turn
        aoki -= B;
        if(aoki > 0){
            // aoki's turn
            takahashi -= D;
        }
    }

    cout << (takahashi > 0 ? "Yes\n" : "No\n");
}