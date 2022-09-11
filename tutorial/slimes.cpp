#include <iostream>
using namespace std;


int main(){
    int N; cin >> N;
    string s; cin >> s;
    int cnt = 0;
    for(int i = 0; i < N;){
        int j = i;
        while(j < N && s.at(i) == s.at(j)){
            j++;
        }

        cnt++;
        i = j;
    }

    cout << cnt << endl;
}