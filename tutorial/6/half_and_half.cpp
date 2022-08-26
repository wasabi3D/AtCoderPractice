#include <iostream>
using namespace std;
using ll = long long;


int main(){
    ll a, b, c, x, y; cin >> a >> b >> c >> x >> y;

    ll mini = a * x + b * y;
    for(ll A = 0; A <= x; A++){
        ll AB = 2 * (x - A);
        ll B = y - (AB / 2);

        AB = max(0ll, AB); B = max(0ll, B);
        mini = min(mini, A * a + B * b + AB * c);
        
    }

    for(ll B = 0; B <= y; B++){
        ll AB = 2 * (y - B);
        ll A = x - (AB / 2);

        AB = max(0ll, AB); A = max(0ll, A);
        mini = min(mini, A * a + B * b + AB * c);
    }
    

    for(ll AB = 0; AB <= max(x * 2, y * 2); AB += 2){
        ll A = x - (AB / 2);
        ll B = y - (AB / 2);

        A = max(0ll, A); B = max(0ll, B);
        mini = min(mini, A * a + B * b + AB * c);
        
    }



    cout << mini << endl;
}