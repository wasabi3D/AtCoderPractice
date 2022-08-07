#include <iostream>
#include <vector>
using namespace std;


void analyze(vector<pair<char, int>> &container, const string& target){
    for(char c : target){
        if(container.size() == 0){
            container.push_back(make_pair(c, 1));
        }else{
            if(container.at(container.size() - 1).first == c){
                container.at(container.size() - 1).second++;
            }else{
                container.push_back(make_pair(c, 1));
            }
        }
    }
}


int main(){
    string S, T; cin >> S >> T;
    vector<pair<char, int>> s_list(0);
    vector<pair<char, int>> t_list(0);
    analyze(s_list, S);
    analyze(t_list, T);

    if(s_list.size() != t_list.size()){
        cout << "No\n";
        return 0;
    }

    for(int i = 0; i < s_list.size(); i++){
        if(s_list.at(i).first != t_list.at(i).first){
            cout << "No\n";
            return 0;
        }
        else if(s_list.at(i).second != t_list.at(i).second){
            // t > sの場合
            if(t_list.at(i).second > s_list.at(i).second && s_list.at(i).second < 2){
                cout << "No\n";
                return 0;
            }
            // t < sの場合
            else if(t_list.at(i).second < s_list.at(i).second){
                cout << "No\n";
                return 0;
            }
        }
    }

    cout << "Yes\n";
}