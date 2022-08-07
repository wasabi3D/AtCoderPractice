#include <iostream>
#include <vector>
using namespace std;


vector<long long> decompose2digits(long long n){
    vector<long long> digits(0);
    while(n / 10 > 0){
        digits.push_back(n % 10);
        n /= 10;
    }

    digits.push_back(n);
    return digits;
}

long long convert2decimal(const vector<long long>& digits, const long long& base){
    long long b = 1;
    long long ret = 0;
    for(long long dg : digits){
        ret += b * dg;
        b *= base;
    }

    return ret;
}

vector<long long> convert2basek(long long n, const long long& base){
    vector<long long> digits(0);
    while(n > base){
        digits.push_back(n % base);
        n /= base;
    }
    digits.push_back(n);
    return digits;
}

int main(){
    long long N, K; cin >> N >> K;

    N = convert2decimal(decompose2digits(N), 8);
    vector<long long> base9;
    for(int i = 0; i < K; i++){
        base9 = convert2basek(N, 9);
        for(int i = 0; i < base9.size(); i++){
            if(base9.at(i) == 8) base9.at(i) = 5;
        }

        N = convert2decimal(base9, 8);
    }

    // int tot = 0;
    // int b = 1;
    // for(int i : base9){
    //     tot += b * i;
    //     b *= 10;
    // }

    // cout << tot << endl; 
    cout << convert2decimal(convert2basek(N, 8), 10) << endl;
}
