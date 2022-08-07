#include <iostream>
using namespace std;


int main(){
    int N, X, T;
    cin >> N >> X >> T;

    cout << (N % X == 0 ? (N / X) * T : (N / X + 1) * T) << endl;
}