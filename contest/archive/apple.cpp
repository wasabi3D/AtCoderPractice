#include <iostream>
using namespace std;


int main(){
    int X, Y, N; cin >> X >> Y >> N;

    int mini = X * N;
    for(int a = 0; a <= N; a++){
        int b = N - a;
        if(b % 3 == 0){
            mini = min(X * a + Y * (b / 3), mini);
        }
    }

    cout << mini << endl;
}