#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;


int main(){
    int Q; cin >> Q;
    map<int, int> S;
    priority_queue<int, vector<int>, greater<int>> minimum;
    priority_queue<int, vector<int>, less<int>> maximum;

    for(int i = 0; i < Q; i++){
        int inst; cin >> inst;
        if(inst == 1){
            int x; cin >> x;
            if(S.find(x) != S.end()) S[x]++;
            else S[x] = 1;
        
            maximum.push(x);
            minimum.push(x);
        }else if(inst == 2){
            int x, c; cin >> x >> c;
            S[x] -= min(S[x], c);
        }else{
            int max_val = -1, min_val = -1;
            while(max_val == -1 && maximum.size() > 0){  // Find maximum
                int top = maximum.top();
                if(S[top] > 0) max_val = top;
                else maximum.pop();
            }
            while(min_val == -1 && minimum.size() > 0){  // Find minimum
                int top = minimum.top();
                if(S[top] > 0) min_val = top; 
                else minimum.pop(); 
            }
            cout << max_val - min_val << endl;
        }
    }
}