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

int main(){
    long long K, A, B; cin >> K >> A >> B;

    long long b10A = convert2decimal(decompose2digits(A), K), b10B = convert2decimal(decompose2digits(B), K);
    cout << b10A * b10B << endl;
}