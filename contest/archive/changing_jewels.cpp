#include <iostream>
#include <vector>
using namespace std;


bool check(vector<long> vc, long exc){
    for(long i = 2; i < vc.size(); i++){
        if(i == exc) continue;
        if(vc.at(i) > 0){
            return true;
        }
    }

    return false;
}


int main(){
    long N, X, Y; cin >> N >> X >> Y;
    vector<long> red_jewels(100, 0), blue_jewels(100, 0);
    red_jewels.at(N) = 1;

    while(check(red_jewels, -1) || check(blue_jewels, 1)){
        for(long i = 2; i < 11; i++){
            red_jewels.at(i - 1) += red_jewels.at(i);
            blue_jewels.at(i) += red_jewels.at(i) * X;
            red_jewels.at(i) = 0;
        }

        for(long i = 2; i < 11; i++){
            red_jewels.at(i - 1) += blue_jewels.at(i);
            blue_jewels.at(i - 1) += blue_jewels.at(i) * Y;
            blue_jewels.at(i) = 0;
        }

    }

    cout << blue_jewels.at(1) << endl;

}