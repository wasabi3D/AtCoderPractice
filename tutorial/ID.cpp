#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
using ll = long long;


string generate_id(const ll& pref_id, const ll& index){
    string str_pid = to_string(pref_id);
    string str_index = to_string(index);
    str_pid = string(6 - str_pid.size(), '0') + str_pid;
    str_index = string(6 - str_index.size(), '0') + str_index;

    return str_pid + str_index;
}



int main(){
    int N, M; cin >> N >> M;
    vector<vector<pair<ll, ll>>> cities(N, vector<pair<ll, ll>>(0));

    for(int i = 0; i < M; i++){
        ll P, Y; cin >> P >> Y;
        cities.at(P - 1).push_back(make_pair(i + 1, Y));
    }

    for(vector<pair<ll, ll>>& pref : cities){
        sort(pref.begin(), pref.end(), [](auto &left, auto &right){
            return left.second < right.second;
        });
    }

    vector<pair<ll, string>> cnames(0);
    for(int pid = 1; pid <= cities.size(); pid++){
        vector<pair<ll, ll>>& pref = cities.at(pid - 1);
        for(int i = 0; i < pref.size(); i++){
            cnames.push_back(make_pair(pref.at(i).first, generate_id(pid, i + 1)));
        }
    }

    sort(cnames.begin(), cnames.end());

    for(pair<ll, string>& city : cnames){
        cout << city.second << endl;
    }
}