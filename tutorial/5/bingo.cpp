#include <iostream>
#include <vector>
using namespace std;


void mark(vector<vector<int>>& card, int num){
    for(int i = 0; i < card.size(); i++){
        for(int j = 0; j < card.at(i).size(); j++){
            if(card.at(i).at(j) == num){
                card.at(i).at(j) = -1;
            }
        }
    }
}


bool check(const vector<vector<int>>& card){
    // horizontal
    for(int i = 0; i < card.size(); i++){
        bool ok = true;
        for(int j = 0; j < card.at(0).size(); j++){
            if(card.at(i).at(j) != -1){
                ok = false;
            }
        }

        if(ok){
            return true;
        }
    }

    // vertical
    for(int i = 0; i < card.at(0).size(); i++){
        bool ok = true;
        for(int j = 0; j < card.size(); j++){
            if(card.at(j).at(i) != -1){
                ok = false;
            }
        }

        if(ok){
            return true;
        }
    }

    // diagonal
    bool ok = true;
    int x = 0, y = 0;
    for(int i = 0; i < 3; i++){
        if(card.at(x).at(y) != -1){
            ok = false;
        }
        x++; y++;
    }

    if(ok){
        return true;
    }


    ok = true;
    x = 2; y = 0;
    for(int i = 0; i < 3; i++){
        if(card.at(x).at(y) != -1){
            ok = false;
        }
        x--; y++;
    }

    if(ok){
        return true;
    }

    return false;
}


int main(){
    vector<vector<int>> bingo_card(3, vector<int>(3));
    for(int i = 0; i < 3; i++) for(int j = 0; j < 3; j++) cin >> bingo_card.at(i).at(j);

    int N; cin >> N;

    vector<int> B(N);
    for(int i = 0; i < N; i++){
        cin >> B.at(i);
    }

    for(int b : B){
        mark(bingo_card, b);
        if(check(bingo_card)){
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";
    return 0;
}