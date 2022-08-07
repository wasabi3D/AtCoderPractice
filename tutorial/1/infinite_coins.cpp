#include <iostream>
using namespace std;


int main(){
    int N, A; cin >> N >> A;

    int rest = N - (500 * (N / 500));
    cout << (rest <= A ? "Yes\n" : "No\n");
}