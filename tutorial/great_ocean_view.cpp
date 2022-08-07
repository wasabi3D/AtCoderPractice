#include <iostream>
#include <vector>
using namespace std;


int main(){
    int N; cin >> N;
    vector<int> H(N);

    for(int i = 0; i < N; i++) cin >> H.at(i);

    int max_altitude = -1, counter = 0;
    for(int alt : H){
        if(alt >= max_altitude){
            ++counter;
            max_altitude = alt;
        }
    }

    cout << counter << endl;
}