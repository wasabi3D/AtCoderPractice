#include <iostream>
using namespace std;


int main(){
    int N;
    cin >> N;

    for(int i = 1; i < 10; i++){
        for(int j = 1; j < 10; j++){
            if(N == i * j){
                cout << "Yes\n";
                return 0;
            }
        }
    }

    cout << "No\n";
    return 0;
}