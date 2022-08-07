#include <iostream>
using namespace std;


int main(){
    int A, B; cin >> A >> B;

    for(int i = 1; i < 100000; i++){
        int eight = i * 0.08;
        int ten = i * 0.1;
        if(eight == A && ten == B){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}