#include <iostream>
#include <vector>
using namespace std;
using ll = long long;


int main(){
    int N; cin >> N;
    vector<ll> A(N);
    ll total = 0;
    for(int i = 0; i < N; i++){
        cin >> A.at(i);
        total += A.at(i);
    }

    ll tenth = 0.1 * total;

    if(tenth == 0){
        cout << "No\n";
        return 0;
    }

    for(int i = 0; i < A.size(); i++){
        ll tmp_tot = 0;
        int index = i;
        while(tmp_tot < tenth){
            // cout << A.at(index) << " (" << index << ") ";
            tmp_tot += A.at(index);
            ++index;
            if(index >= A.size()) index = 0;
        }
        // cout << endl;

        if(tmp_tot == tenth){
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";
    return 0;
}