#include <iostream>
#include <vector>
using namespace std;


vector<int> decompose2digits(int n){
    vector<int> digits(0);
    while(n / 10 > 0){
        digits.push_back(n % 10);
        n /= 10;
    }

    digits.push_back(n);
    return digits;
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

long long convert2decimal(const vector<long long>& digits, const long long& base){
    long long b = 1;
    long long ret = 0;
    for(long long dg : digits){
        ret += b * dg;
        b *= base;
    }

    return ret;
}


void scpt(char ** ch){
    // *ch = 'a';
}

int main(){
    // for(int i : convert2basek(720453636425089, 8)){
    //     cout << i << endl;
    // }
    // char c = 'a';
    // char* pc = &c;
    // char** pc2 = &pc;

    // *pc2 = "b";
    // cout << c << endl;


    double a = 1.0;
    int b = 1;
    if(a == b){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
}