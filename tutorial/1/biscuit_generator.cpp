#include <iostream>
using namespace std;


int main(){
    int A, B, T;
    cin >> A >> B >> T;

    int cookies = B * (T / A);
    cout << cookies << endl;
}