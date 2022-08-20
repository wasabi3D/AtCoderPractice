#include <iostream>
#include <vector>
using namespace std;


int main(){
    int N; cin >> N;
    vector<string> S(N);
    for(int i = 0; i < N; i++) cin >> S.at(i);

    for(int i = N - 2; i >= 0; i--){
        for(int j = 1; j <= 2 * N - 3; j++){
            if(S.at(i).at(j) == '#'){
                char c1 = S.at(i + 1).at(j - 1), c2 = S.at(i + 1).at(j), c3 = S.at(i + 1).at(j + 1);
                if(c1 == 'X' || c2 == 'X' || c3 == 'X'){
                    S.at(i).at(j) = 'X';
                }
            }
        }
    }

    for(string s : S){
        cout << s << endl;
    }
}