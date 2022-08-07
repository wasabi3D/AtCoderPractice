#include <iostream>
#include <vector>
using namespace std;


int main(){
    int N;
    vector<pair<string, int>> submissions(N), originals(0);
    for(int i = 0; i < N; i++){
        string s; int sc; cin >> s >> sc;
        submissions.at(i) = make_pair(s, sc);
    }

    for(pair<string, int> sub : submissions){
        
    }
}