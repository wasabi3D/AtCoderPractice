#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int N; cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A.at(i);

    sort(A.begin(), A.end());

    bool ok = true;
    for(int i = 1; i < A.size(); i++){
        if(A.at(i) - A.at(i - 1) != 1){
            ok = false;
        }
    }

    cout << (ok ? "Yes\n" : "No\n");
}