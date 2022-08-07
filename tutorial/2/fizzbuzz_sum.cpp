#include <iostream>
using namespace std;


int main(){
    int N; cin >> N;

    long sum = 0;
    for(int i = 1; i <= N; i++){
        sum += (i % 3 != 0 && i % 5 != 0 ? i : 0);
    }

    cout << sum << endl;
}