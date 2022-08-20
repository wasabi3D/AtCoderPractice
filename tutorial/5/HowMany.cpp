#include <iostream>
using namespace std;

#define rep(i, n) for(int i = 0; i <= n; i++)

int main(){
    int S, T; cin >> S >> T;

    int counter = 0;
    rep(i, S) rep(j, S) rep(k, S){
        counter += (i + j + k) <= S && (i * j * k) <= T;
    }

    cout << counter << endl;
}