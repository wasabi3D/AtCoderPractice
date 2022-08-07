#include <iostream>
using namespace std;


int main(){
    int N; cin >> N;

    int saving = 0, day = 1;
    while(1){
        saving += day;
        if(saving >= N){
            cout << day << endl;
            break;
        }

        day++;
    }
}