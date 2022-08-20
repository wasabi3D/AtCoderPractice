#include <iostream>
using namespace std;


int main(){
    int K, S; cin >> K >> S;

    int count = 0;
    for(int x = 0; x <= K; x++){
        for(int y = 0; y <= min(K, S - x); y++){
            if(x + y <= S && S - x - y <= K){
                count++;
            }
        }
    }

    cout << count << endl;
}