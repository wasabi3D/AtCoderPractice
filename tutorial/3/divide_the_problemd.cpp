#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int N; cin >> N;
    vector<int> d(N);
    for(int i = 0; i < N; i++) cin >> d.at(i);

    sort(d.begin(), d.end());

    int median_index = d.size() / 2;

    cout << d.at(median_index) - d.at(median_index - 1) << endl;
}
