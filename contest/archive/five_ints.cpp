#include <iostream>
#include <set>
using namespace std;


int main(){
    set<int> s;
    for(int i = 0; i < 5; i++){
        int n; cin >> n;
        s.insert(n);
    }

    cout << s.size() << endl;
}