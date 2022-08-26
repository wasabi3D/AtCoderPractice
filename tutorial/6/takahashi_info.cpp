#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;


int main(){
    vector<vector<int>> grid(3, vector<int>(3));
    for(int i = 0; i < 3; i++) for(int j = 0; j < 3; j++) cin >> grid.at(i).at(j);

    int a1, a2, b1, b2;
    for(a1 = 0; a1 <= 100; a1++) for(a2 = 0; a2 <= 100; a2++) for(b1 = 0; b1 <= 100; b1++) for(b2 = 0; b2 <= 100; b2++){
        if(a1 + b1 == grid[0][0] && a1 + b2 == grid[0][1] && a2 + b1 == grid[1][0] && a2 + b2 == grid[1][1]){
            if(grid[2][0] - b1 == grid[2][1] - b2 && grid[0][2] - a1 == grid[1][2] - a2){
                int a3 = grid[2][0] - b1, b3 = grid[0][2] - a1;
                if(a3 + b3 == grid[2][2]){
                    cout << "Yes\n";
                    return 0;
                }
            }
        }
    }

    cout << "No\n";
}