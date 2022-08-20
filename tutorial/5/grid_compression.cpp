#include <iostream>
#include <vector>
using namespace std;


bool is_emptys(const string& s){
    bool ok = true;
    for(char c : s){
        if(c != '.'){
            ok = false;
        }
    }
    return ok;
}


int main(){
    int H, W; cin >> H >> W;
    vector<string> a(H), ans(0);
    for(int i = 0; i < H; i++) cin >> a.at(i);

    // remove horizontal
    for(string s : a){
        if(!is_emptys(s)){
            ans.push_back(s);
        }
    }

    vector<string> ans2(ans.size(), "");
    for(int i = 0; i < W; i++){
        string tmp = "";
        for(int j = 0; j < ans.size(); j++){
            tmp += ans.at(j).at(i);
        }
        
        if(!is_emptys(tmp)){
            for(int k = 0; k < tmp.size(); k++){
                ans2.at(k).push_back(tmp.at(k));
            }
        }
    }

    for(string s : ans2){
        cout << s << endl;
    }


}