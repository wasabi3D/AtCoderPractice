#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    string s; cin >> s;

    vector<pair<string, string>> words(0);

    for(int i = 0; i < s.size();){
        int j = i;
        string tmp = "";
        do{
            tmp += s.at(j);
            j++;
        }
        while(j < s.size() && 'a' <= s.at(j) && s.at(j) <= 'z');
        tmp += s.at(j);
        j++;
        
        string low = tmp;
        low.at(0) += ('a' - 'A');
        low.at(low.size() - 1) += ('a' - 'A');
        words.push_back(make_pair(low, tmp));

        i = j;
    }

    sort(words.begin(), words.end());
    for(pair<string, string> p : words){
        cout << p.second;
    }

    cout << endl;
}