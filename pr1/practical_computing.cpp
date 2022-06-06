#include <iostream>
#include <vector>
using namespace std;


void print_vec(const vector<int>& v){
    for(int val : v) cout << val << " ";
    cout << endl;
}


int main(){
    int N; cin >> N;
    vector<vector<int>> result(1, vector<int>(1, 1));
    for(int l = 2; l < N + 1; l++){
        vector<int> line(l);
        for(int i = 0; i < l; i++){
            if(i == 0 || i == l - 1){
                line.at(i) = 1;
            }else{
                line.at(i) = result.at(l - 2).at(i - 1) + result.at(l - 2).at(i);
            }
        }
        result.push_back(line);
    }

    for(vector<int> vec : result) print_vec(vec);
}