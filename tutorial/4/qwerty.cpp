#include <iostream>
#include <vector>
using namespace std;


int main(){
    
    string str = "";
    for(int i = 0; i < 26; i++){
        char c; cin >> c;
        c += 'a' - 1;
        str += c; 
    }

    cout << str << endl;
}