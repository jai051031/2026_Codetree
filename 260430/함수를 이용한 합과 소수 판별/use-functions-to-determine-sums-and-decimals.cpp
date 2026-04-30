#include <iostream>
using namespace std;
int f2(int n){
    for(int i=2; i<n; i++){
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int f(int a, int b){
    int cnt = 0;
    for(int i=a; i<=b; i++){
        if(i < 10){
            if(i % 2 == 0 && f2(i) == 1){
                cnt++;
            }
        }
        else if(i < 100){
            if((i%10+i/10) % 2 == 0 && f2(i) == 1){
                cnt++;
            }
        }
        else if(i == 100){
            if((i%10+(i/10)%10+i/100) % 2 == 0 && f2(i) == 1){
                cnt++;
            }
        }
    }
    return cnt;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << f(a, b);
    return 0;
}