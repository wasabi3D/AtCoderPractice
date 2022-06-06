#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void print_vec(const vector<int>& v){
    for(int val : v) cout << val << " ";
    cout << endl;
}


int main(){
    int N, K; cin >> N >> K;
    vector<int> suite(N);
    vector<vector<int>> B(K, vector<int>(0));
    for(int i = 0; i < N; i++){
        cin >> suite.at(i);
        B.at(i % K).push_back(suite.at(i));
    }

    sort(suite.begin(), suite.end());

    for(vector<int>& vec : B){
        sort(vec.begin(), vec.end());
    }

    vector<int> after(N);
    for(int i = N - 1; i >= 0; i--){
        after.at(i) = B.at(i % K).back();
        B.at(i % K).pop_back();
    }

    cout << (suite == after ? "Yes" : "No") << endl;

}