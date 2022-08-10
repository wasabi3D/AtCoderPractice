#include <iostream>
using namespace std;


int main(){
    int N; cin >> N;
    string S; cin >> S;

    for(char& c : S){
        char new_char = c + N;
        if(new_char > 'Z'){
            new_char -= 26;
        }

        c = new_char;
    }

    cout << S << endl;
}