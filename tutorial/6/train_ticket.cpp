#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;


char sign(int n){
    if(n == 1) return '+';
    else return '-';
}


int main(){
    vector<int> numbers(4);
    for(int i = 0; i < 4; i++){
        char c; cin >> c;
        numbers.at(i) = c - '0';
    }

    vector<int> signs = {-1, 1};

    for(int q : signs) for(int w : signs) for(int e : signs){
        if(numbers.at(0) + q * numbers.at(1) + w * numbers.at(2) + e * numbers.at(3) == 7){
            printf("%d%c%d%c%d%c%d=7\n", numbers.at(0), sign(q), numbers.at(1), sign(w), numbers.at(2), sign(e), numbers.at(3));
            return 0;
        }
    }
}