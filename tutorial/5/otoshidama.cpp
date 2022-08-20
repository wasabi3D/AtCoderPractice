#include <iostream>
#include <stdio.h>
using namespace std;


int main(){
    int N, Y; cin >> N >> Y;

    for(int i = 0; i <= N; i++){
        for(int j = 0; j <= N - i; j++){
            int k = N - i - j;
            if(i * 10000 + j * 5000 + k * 1000 == Y){
                printf("%d %d %d\n", i, j, k);
                return 0;
            }
        }
    }

    printf("-1 -1 -1\n");
    return 0;
}