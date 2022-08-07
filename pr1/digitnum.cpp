#include <iostream>
#include <string>
using namespace std;


int f(int x){
    string tmp = to_string(x);
    int digits = tmp.size();
    return (x >= 10 ? x - ((digits - 1) * 10) + 1 : x);
}


int main(){
    int N; cin >> N;
    int sum = 0;
    for(int x = 1; x <= N; x++){
        sum = (sum + f(x)) % 998244353;
    }

    cout << sum << endl;

}