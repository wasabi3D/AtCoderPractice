#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

// https://atcoder.jp/contests/abc249/tasks/abc249_c
// BIT 全探索  
int main(){
    // INPUT
    int N, K;
    cin >> N >> K;
    int ans = 0;
    vector<string> strs(N);
    for(int i = 0; i < N; i++) cin >> strs.at(i);

    // 全てのパターンを試す(選ぶ文字列をbitであらわす -> パターン数は2^n)
    for(int bits = 0; bits < (1 << N); bits++){
        // Map init
        map<char, int> count;
        for(char c = 'a'; c <= 'z'; c++){
            count[c] = 0;
        }

        for(int i = 0; i < N; i++){
            // 文字列のインデックスが試す文字列に該当するか
            if(bits & (1 << i)){
                // するならその文字列に含まれている文字をカウント
                string str = strs.at(i);
                set<char> tmp(str.begin(), str.end());
                for(char c : tmp){
                    count[c]++;
                }
            }
        }

        // ちょうどK回でる文字の個数を探し、必要あれば最大値と入れ替え
        int counter_k = 0;
        for(const auto& item : count){
            if(item.second == K){
                counter_k++;
            }
        }
        if(counter_k > ans) ans = counter_k;
    }
    
    cout << ans << endl;
}