#include <iostream>
#include <cmath>
using namespace std;


bool expo(int n, int p){
    while(n > 1){
        if(n % p == 0){
            n /= p;
        }else{
            return false;
        }
    }

    return true;
}


bool ok(int n){
    if(n == 1){
        return true;
    }

    for(int i = 2; i <= sqrt(n); i++){
        if(expo(n, i)){
            return true;
        }
    }

    return false;
}


int main(){
    int X; cin >> X;

    int max_expo = -1;
    for(int i = 1; i <= X; i++){
        if(ok(i)){
            max_expo = max(max_expo, i);
            // cout << i << endl;
        }
    }

    cout << max_expo << endl;
}