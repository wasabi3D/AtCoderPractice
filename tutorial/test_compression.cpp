#include <iostream>
using namespace std;


int main(){
    string s; cin >> s;
    int N = s.size();

    for(int i = 0; i < N;){
        int j = i;

        while(j < N && s.at(i) == s.at(j)) j++;

        cout << s.at(i) << ": " << j - i << endl;
        i = j;
    }
}