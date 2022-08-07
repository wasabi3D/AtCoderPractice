#include <iostream>
using namespace std;


int main(){
    int A, B; cin >> A >> B;
    int sum = A + B, diff = A - B, prod = A * B;

    cout << max(sum, max(diff, prod)) << endl;
}