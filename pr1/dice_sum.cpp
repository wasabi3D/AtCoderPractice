#include <iostream>
#include <vector>
#include <numeric>
using namespace std;


#define MOD 998244353


void print_vec(vector<vector<int>> v){
    for(vector<int> l : v){
        for(int i : l){
            cout << i << " ";
        }
        cout << endl;
    }
}



// https://atcoder.jp/contests/abc248/tasks/abc248_c
int main(){
    int N, M, K; cin >> N >> M >> K;

    
    vector<vector<int>> dp(N + 10, vector<int>(K + 1, 0));
    dp[0][0] = 1;


    for(int n = 0; n < N; n++){
        for(int m = 0; m < K; m++){
            for(int a = 1; a < M + 1; a++){
                if(m + a < K + 1){
                    dp[n + 1][m + a] = (dp[n][m] + dp[n + 1][m + a]) % MOD;
                }
            }
        }
    }

    // print_vec(dp);
    int sum = 0;
    for(int n : dp[N]){
        sum = (sum + n) % MOD;
    }
    // cout << (accumulate(dp[N].begin() + 1, dp[N].end(), 0) % MOD) << endl;
    cout << sum << endl;

}