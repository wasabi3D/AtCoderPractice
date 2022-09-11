#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;


bool can_move(int& curi, int& curj, char let, int H, int W, vector<string>& grid){
    bool ok = (let == 'U' && curi > 0) || (let == 'D' && curi < H - 1) || (let == 'R' && curj < W - 1) || (let == 'L' && curj > 0);

    if(ok){
        grid.at(curi).at(curj) = 'X';
        if(let == 'U') curi--;
        else if(let == 'D') curi++;
        else if(let == 'R') curj++;
        else if(let == 'L') curj--;
    }

    return ok;
}


int main(){
    int H, W; cin >> H >> W;

    vector<string> grid(H);
    for(int i = 0; i < H; i++) cin >> grid.at(i);

    int curi = 0, curj = 0;
    while(grid.at(curi).at(curj) != 'X'){
        if(!can_move(curi, curj, grid.at(curi).at(curj), H, W, grid)){
            printf("%d %d\n", curi + 1, curj + 1);
            return 0;
        }
    }

    cout << -1 << endl;
}