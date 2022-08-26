#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;


bool check(int n, const vector<pair<int, int>>& conditions){
    string str = to_string(n);

    for(pair<int, int> c : conditions){
        int digit = str.at(c.first - 1) - '0';
        if(digit != c.second){
            return false;
        }
    }

    return true;
}


int main(){
    int N, M; cin >> N >> M;
    vector<pair<int, int>> conds(M);

    for(int i = 0; i < M; i++){
        int s, c; cin >> s >> c;
        conds.at(i) = make_pair(s, c);
    }

    int num = pow(10, N - 1);
    if(N == 1) num = 0;

    for(int i = num; i < pow(10, N - 1) * 10; i++){
        if(check(i, conds)){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}