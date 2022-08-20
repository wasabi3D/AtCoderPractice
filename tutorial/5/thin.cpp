#include <iostream>
#include <vector>
using namespace std;


int main(){
    int H, W; cin >> H >> W;
    vector<string> C(H), ans(H * 2);

    for(int i = 0; i < H; i++){
        string c; cin >> c;
        ans.at(i * 2) = c; ans.at(i * 2 + 1) = c;
    }

    for(string s : ans){
        cout << s << endl;
    }
}