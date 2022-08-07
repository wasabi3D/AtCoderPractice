#include <iostream>
using namespace std;


int main(){
    long A, B, K; cin >> A >> B >> K;

    if(A + K >= B - K + 1){
        for(int i = A; i <= B; i++){
            cout << i << endl;
        }
    }else{

        for(int i = A; i < A + K; i++){
            cout << i << endl;
        }

        for(int i = B - K + 1; i <= B; i++){
            cout << i << endl;
        }
    }
}