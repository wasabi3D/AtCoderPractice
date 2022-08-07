#include <iostream>
using namespace std;


int get_division_num(int n){
    int ans = 0;
    while(n % 2 == 0){
        n /= 2; ans++;
    }

    return ans;
}


int main(){
    int N; cin >> N;

    int max_ = 0, num = 1;
    for(int i = 1; i <= N; i++){
        int ret = get_division_num(i);
        if(ret > max_){
            max_ = ret;
            num = i;
        }
    }

    cout << num << endl;
}