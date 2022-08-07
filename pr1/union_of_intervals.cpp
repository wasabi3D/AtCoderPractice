#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n; cin >> n;
    vector<pair<int, int>> intervals(n);
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        intervals.at(i) = make_pair(a, b);
    }

    sort(intervals.begin(), intervals.end());


    vector<pair<int, int>> ans(0);
    for(pair<int, int> interval : intervals){
        if(ans.size() == 0 || ans.at(ans.size() - 1).second < interval.first){
            ans.push_back(interval);
        }else if(ans.at(ans.size() - 1).second >= interval.first && interval.second > ans.at(ans.size() - 1).second){
            ans.at(ans.size() - 1).second = interval.second;
        }
    }


    for(pair<int, int> p : ans){
        cout << p.first << " " << p.second << endl;
    }
}