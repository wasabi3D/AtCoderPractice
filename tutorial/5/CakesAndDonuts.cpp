#include <iostream>
using namespace std;


int main(){
    int N; cin >> N;

    for(int i = 0; i <= N / 4; i++){
        for(int j = 0; j <= N / 7; j++){
            if(i * 4 + j * 7 == N){
                cout << "Yes\n";
                return 0;
            }
        }
    }

    cout << "No\n";
}