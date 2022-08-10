#include <iostream>
using namespace std;


int main(){
    string S; cin >> S;

    if(S.at(0) != 'A'){
        cout << "WA\n";
        return 0;
    }

    string partial_str = S.substr(2, S.size() - 3);
    int Ccount = 0;
    for(char& c : S){
        Ccount += (c == 'C');
    }
    if(Ccount != 1){
        cout << "WA\n";
        return 0; 
    }

    for(int i = 0; i < S.size(); i++){
        if(i == 0 || (2 <= i && i < S.size() - 1)) continue;
        char c = S.at(i);
        if(!('a' <= c && c <= 'z')){
            cout << "WA\n";
            return 0;
        }
    }

    cout << "AC\n";


}