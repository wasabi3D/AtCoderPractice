#include <iostream>
using namespace std;


int main(){
    int a, b; cin >> a >> b;
    char ac = a + '1' - 1, bc = b + '1' - 1;

    string as = string(b, ac), bs = string(a, bc);
    cout << (as < bs ? as : bs) << endl;
}