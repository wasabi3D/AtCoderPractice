#include <iostream>
#include <vector>
using namespace std;


int count_mines(const vector<string>& table, int h, int w, int height, int width){
    int counter = 0;
    for(int i = -1; i < 2; i++){
        for(int j = -1; j < 2; j++){
            if(i == 0 && j == 0) continue;

            int new_h = h + i, new_w = w + j;

            if(new_h < 0 || new_h > height - 1 || new_w < 0 || new_w > width - 1) continue;

            if(table.at(new_h).at(new_w) == '#'){
                counter++;
            }
        }
    }

    return counter;
}


int main(){
    int H, W; cin >> H >> W;
    vector<string> tbl(H);

    for(int i = 0; i < H; i++) cin >> tbl.at(i);

    for(int h = 0; h < H; h++){
        for(int w = 0; w < W; w++){
            if(tbl.at(h).at(w) == '.'){
                tbl.at(h).at(w) = '0' + count_mines(tbl, h, w, H, W);
            }
        }
    }

    for(string s : tbl){
        for(char c : s){
            cout << c;
        }
        cout << endl;
    }
}