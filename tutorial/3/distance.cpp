#include <iostream>
using namespace std;


int main(){
    long long N, D; cin >> N >> D;

    int counter = 0;
    for(int i = 0; i < N; i++){
        long long x, y; cin >> x >> y;
        counter += ((x * x + y * y) <= D * D);
    }

    cout << counter << endl;
}