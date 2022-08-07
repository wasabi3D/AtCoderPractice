#include <iostream>
using namespace std;


int main(){
    int H, W; cin >> H >> W;

    if(H == 1 || W == 1){
        cout << H * W << endl;
    }
    else{
        int h_max = (H % 2 == 0 ? H / 2 : H / 2 + 1);
        int w_max = (W % 2 == 0 ? W / 2 : W / 2 + 1);

        cout << h_max * w_max << endl;
    }
}