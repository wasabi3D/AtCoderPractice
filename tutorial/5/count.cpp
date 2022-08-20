#include <iostream>
#include <vector>
using namespace std;


int count_around(const vector<string>& grid, int n, int m){
    int counter = 0;
    for(int i = -1; i < 2; i++) for(int j = -1; j < 2; j++){
        int new_n = n + i, new_m = m + j;
        if(new_n < 0 || new_n >= grid.size() || new_m < 0 || new_m >= grid.at(0).size()){
            continue;
        }

        counter += grid.at(new_n).at(new_m) == '#';
    }
    return counter;
}


int main(){
    int N, M; cin >> N >> M;
    vector<string> s(N);
    for(int i = 0; i < N; i++) cin >> s.at(i);

    vector<vector<int>> ans(N, vector<int>(M));
    for(int i = 0; i < s.size(); i++) for(int j = 0; j < s.at(0).size(); j++){
        ans.at(i).at(j) = count_around(s, i, j);
    }

    for(vector<int>& v : ans){
        for(int n : v){
            cout << n;
        }
        cout << endl;
    }
}