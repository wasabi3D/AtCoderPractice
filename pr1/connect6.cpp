#include <vector>
#include <iostream>
using namespace std;


int main(){
    vector<pair<int, int>> dirs = {{1, 0}, {0, 1}, {1, 1}, {1, -1}};
    int N; cin >> N;
    vector<string> grid(N);
    for(int i = 0; i < N; i++) cin >> grid.at(i);

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(grid.at(i).at(j) == '.') continue;
            for(pair<int, int> d : dirs){
                pair<int, int> cur_pos = make_pair(i, j);
                int remaining_tile = 2;
                for(int t = 1; t < 6; t++){
                    cur_pos.first += d.first; cur_pos.second += d.second;
                    if(cur_pos.first >= N || cur_pos.second >= N || cur_pos.second < 0){
                        if(remaining_tile < 6 - t){
                            remaining_tile = -1;
                            break;
                        }
                        pair<int, int> test_pos = make_pair(i, j);
                        int yaa = 0;
                        for(int _ = 0; _ < remaining_tile; _++){
                            test_pos.first -= d.first; test_pos.second -= d.second;
                            if(test_pos.first < 0 || test_pos.second < 0 || test_pos.second >= N){
                                yaa = -1;
                                break;
                            }
                        }

                        remaining_tile = yaa;
                        break;
                    }
                    // cout << grid.at(cur_pos.first).at(cur_pos.second) << " ";
                    if(grid.at(cur_pos.first).at(cur_pos.second) == '.') remaining_tile--;
                }

                // cout << remaining_tile << endl;
                if(remaining_tile >= 0){
                    cout << "Yes\n";
                    return 0;
                }
            }
        }
    }

    cout << "No\n";

}