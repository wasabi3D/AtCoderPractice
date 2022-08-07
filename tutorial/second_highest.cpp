#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int N; cin >> N;
    vector<pair<int, string>> mountains(N);

    for(int i = 0; i < N; i++){
        string name; int height;
        cin >> name >> height;
        mountains.at(i) = make_pair(height, name);
    }

    sort(mountains.begin(), mountains.end());

    cout << mountains.at(mountains.size() - 2).second << endl;
}