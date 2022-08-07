#include <iostream>
#include <vector>
#include <limits>
#include <stdio.h>
using namespace std;


struct Stage{
    int cinematic;
    int gameplay;
    int total;
};


struct Status{
    bool available;
    bool first_time;
};


Status get_status(const vector<bool>& clear_list, const int& index){
    if(index == 0){
        return {true, !clear_list.at(0)};
    }else{
        return {clear_list.at(index - 1), !clear_list.at(index)};
    }
}


int main(){
    const int INF = numeric_limits<int>::max();
    int N, X; cin >> N >> X;
    vector<Stage> stages(N);
    vector<bool> cleared(N, false);
    for(int i = 0; i < N; i++){
        int a, b; cin >> a >> b;
        stages.at(i) = {a, b, a + b};
    }

    // dp[N][M]: N回目のステージクリアでステージMを選んだ時の最小時間 
    vector<vector<int>> dp(X + 10, vector<int>(N, INF));
    dp.at(0).at(0) = stages.at(0).total;
    cleared.at(0) = true;

    for(int i = 0; i < X; i++){
        int discovered = -1;
        for(int stg = 0; stg < N; stg++){
            if(dp.at(i).at(stg) == INF) continue;

            for(int si = 0; si < N; si++){
                Status status = get_status(cleared, si);
                if(!status.available) break;
                if(status.first_time) discovered = si;
                int min_time = (status.first_time ? stages.at(si).total : stages.at(si).gameplay);
                // printf("=== %d %d %d %d\n", i, si, min_time, status.first_time);
                int tmp = min_time;
                if(dp.at(i).at(stg) + min_time > dp.at(i + 1).at(si)) tmp = -1;
                printf("== dp.at(%d).at(%d) <- dp.at(%d).at(%d) + %d\n", i + 1, si, i, stg, min_time);
                dp.at(i + 1).at(si) = min(dp.at(i).at(stg) + min_time, dp.at(i + 1).at(si));
                //dp.at(i + 1).at(si) = dp.at(i).at(stg) + min_time;
            }
        }
        if(discovered != -1) cleared.at(discovered) = true;
    }

    int min_time = dp.at(X).at(0);
    for(int i = 0; i < X; i++){
        for(int time : dp.at(i)){
            if(time < min_time) min_time = time;
            cout << time << " ";
        }
        cout << endl;
    }

    // cout << min_time << endl;


}