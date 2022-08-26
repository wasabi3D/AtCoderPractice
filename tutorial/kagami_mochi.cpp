#include <iostream>
#include <set>
using namespace std;


int main(){
    int N; cin >> N;
    set<int> mochis;
    for(int i = 0; i < N ; i++){
        int d; cin >> d;
        mochis.insert(d);
    }
    cout << mochis.size() << endl;
}