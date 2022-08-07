#include <iostream>
#include <vector>
using namespace std;
using namespace std;


int main(){
    int N, M; cin >> N >> M;
    vector<int> X(N);
    vector<int> C(N, 0);
    for(int i = 0; i < N; i++) cin >> X.at(i);
    for(int i = 0; i < M; i++){
        int a, b; cin >> a >> b;
        C.at(a - 1) = b;
    }

    vector<vector<long>> dp(N + 10, vector<long>(N + 1, -1));
    dp.at(0).at(0) = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N + 1; j++){
            if(dp.at(i).at(j) > -1){
                // 表を出す時
                long current = dp.at(i).at(j);
                current += X.at(i) + C.at(j);
                dp.at(i + 1).at(j + 1) = max(dp.at(i + 1).at(j + 1), current);

                // 裏を出す時
                dp.at(i + 1).at(0) = max(dp.at(i + 1).at(0), dp.at(i).at(j));
            }
        }
    }

    long mx = 0;
    // for(int i = 0; i < N + 2; i++){
    //     for(long v : dp.at(i)){
    //         // if(mx < v) mx = v;
    //         cout << v << " ";
    //     }
    //     cout << endl;
    // }

    for(long v : dp.at(N)){
            if(mx < v) mx = v;
    }
    cout << mx << endl;

}