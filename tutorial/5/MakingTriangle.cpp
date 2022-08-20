#include <iostream>
#include <vector>
using namespace std;


bool do_triangle_exist(int a, int b, int c){
    return (abs(b - c) < a) && a < b + c && a != b && a != c && b != c;
}


int main(){
    int N; cin >> N;
    vector<int> l(N);
    for(int i = 0; i < N; i++){
        cin >> l.at(i);
    }

    int counter = 0;
    for(int i = 0; i < N; i++) for(int j = i + 1; j < N; j++) for(int k = j + 1; k < N; k++){
        counter += do_triangle_exist(l.at(i), l.at(j), l.at(k));
    }

    cout << counter << endl;
}