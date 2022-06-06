#include <iostream>
#include <vector>
using namespace std;


int main(){
    int H, W; cin >> H >> W;
    
    pair<int, int> piece1 = {-1, -1}, piece2 = {-1, -1};
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            char input; cin >> input;
            if(input == 'o'){
                if(piece1.first == -1){
                    piece1 = make_pair(i, j);
                }else{
                    piece2 = make_pair(i, j);
                }
            }
        }
    }

    cout << abs(piece1.first - piece2.first) + abs(piece1.second - piece2.second) << endl;


}