#include <iostream>
using namespace std;


int main(){
    int X, A, B; cin >> X >> A >> B;

    int rest = X - A;
    int final_rest = rest - (B * (rest / B));
    cout << final_rest << endl;
}