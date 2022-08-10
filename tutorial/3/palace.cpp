#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int N, T, A; cin >> N >> T >> A;
    vector<pair<double, int>> H(N);

    for(int i = 0; i < N; i++){
        int alt; cin >> alt;
        H.at(i) = make_pair(abs(A - (T - alt * 0.006)), i + 1);
    }

    sort(H.begin(), H.end());

    cout << H.at(0).second << endl;
}