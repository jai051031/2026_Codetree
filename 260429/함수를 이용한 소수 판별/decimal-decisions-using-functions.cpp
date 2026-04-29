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
    int sum = 0;
    for(int i=a; i<=b; i++){
        if(f2(i) == 1)
            sum += i;
    }
    return sum;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << f(a, b);
    return 0;
}