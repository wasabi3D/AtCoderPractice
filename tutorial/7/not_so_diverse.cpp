#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int N, K; cin >> N >> K;
    map<int, int> balls;
    for(int i = 0; i < N; i++){
        int ball_id; cin >> ball_id;
        if(balls.find(ball_id) != balls.end()){
            balls[ball_id]++;
        }else{
            balls[ball_id] = 1;
        }
    }

    vector<int> balls_sort(0);
    for(auto ball : balls) balls_sort.push_back(ball.second);
    sort(balls_sort.begin(), balls_sort.end());

    int balls_to_remove = balls.size() - K;
    int counter = 0;
    for(int i = 0; i < balls_to_remove; i++){
        counter += balls_sort.at(i);
    }

    cout << counter << endl;
}