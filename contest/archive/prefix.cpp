#include <iostream>
using namespace std;


int main(){
    string s, t; cin >> s >> t;

    if(t.substr(0, s.size()) == s){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
}