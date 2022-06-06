#include <iostream>
using namespace std;


int main(){
    string number; cin >> number;
    cout << number.at(number.size() - 2) << number.at(number.size() - 1) << endl;
}
