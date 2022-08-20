#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


double calculate_distance(const vector<int>& p1, const vector<int>& p2){
    int sum = 0;
    for(int i = 0; i < p1.size(); i++){
        sum += (p1.at(i) - p2.at(i)) * (p1.at(i) - p2.at(i));
    }

    return sqrt(sum);
}


int main(){
    int N, D; cin >> N >> D;
    vector<vector<int>> points(N, vector<int>(D));

    for(int i = 0; i < N; i++) for(int j = 0; j < D; j++){
        cin >> points.at(i).at(j);
    }

    int counter = 0;
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            double dist = calculate_distance(points.at(i), points.at(j));
            if(dist - (int)dist == 0){
                ++counter;
            }
        }
    }

    cout << counter << endl;
}