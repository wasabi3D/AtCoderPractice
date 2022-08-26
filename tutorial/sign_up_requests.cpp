#include <iostream>
#include <vector>
#include <set>
using namespace std;


int main(){
    int N; cin >> N;
    set<string> usernames;
    vector<int> days(0);

    for(int day = 1; day <= N; day++){
        string username; cin >> username;

        if(!(usernames.find(username) != usernames.end())){
            usernames.insert(username);
            days.push_back(day);
        }
    }

    for(int d : days) cout << d << endl;
}   
