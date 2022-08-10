#include <iostream>
using namespace std;


int main(){
    string O, E; cin >> O >> E;
    string password = "";
    for(int i = 0; i < O.size() + E.size(); i++){
        if((i + 1) % 2 == 0){
            password += E.at(i / 2);
        }else{
            password += O.at(i / 2);
        }
    }

    cout << password << endl;
}