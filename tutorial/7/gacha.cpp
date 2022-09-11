#include <iostream>
#include <set>
using namespace std;


int main(){
    int N; cin >> N;
    set<string> prizes;
    for(int i = 0; i < N; i++){
        string s; cin >> s;
        prizes.insert(s);
    }

    cout << prizes.size() << endl;
}