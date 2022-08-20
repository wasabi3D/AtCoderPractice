#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;


int main(){
    int H, W, X, Y; cin >> H >> W >> X >> Y;
    vector<string> S(H);
    for(int i = 0; i < H; i++) cin >> S.at(i);

    vector<pair<int, int>> dirs = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    int counter = 1;
    for(pair<int, int> dir : dirs){
        int curx = X - 1, cury = Y - 1;
        curx += dir.first; cury += dir.second;
        while(curx >= 0 && curx < H && cury >= 0 && cury < W){
            // printf("%d %d %c\n", curx, cury, S.at(curx).at(cury));
            if(S.at(curx).at(cury) == '.'){
                counter++;
            }else{
                break;
            }
            curx += dir.first; cury += dir.second;
        }
    }

    cout << counter << endl;
}