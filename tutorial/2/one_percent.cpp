#include <iostream>
using namespace std;


int main(){
    long long X; cin >> X;

    long year = 1;
    long long money = 100;

    if(X < 101){
        cout << 0 << endl;
        return 0;
    }

    while(1){
        money = money + money / 100;
        if(money >= X){
            break;
        }

        year++;
    }

    cout << year << endl;
}