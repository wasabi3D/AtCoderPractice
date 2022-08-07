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


bool is_palindromic(const vector<int>& digits){
    for(int i = 0; i < digits.size() / 2; i++){
        if(digits.at(i) != digits.at(digits.size() - 1 - i)){
            return false;
        }
    }

    return true;
}
 

int main(){
    int A, B; cin >> A >> B;

    int count = 0;
    for(int i = A; i <= B; i++) count += is_palindromic(decompose2digits(i));
            
    cout << count << endl;    
}