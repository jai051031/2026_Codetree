#include <iostream>
using namespace std;
int three(int n){
    int num = n;
    while(num >= 1){
        if(num % 10 == 3 || num % 10 == 6 || num % 10 == 9)
            return 1;
        num /= 10;
    }
    if(n % 3 == 0)
        return 1;
    else
        return 0;
}
int f(int a, int b){
    int cnt = 0;
    for(int i=a; i<=b; i++){
        if(three(i) == 1)
            cnt++;
    }
    return cnt;
}
int main() {
    int A, B;
    cin >> A >> B;
    cout << f(A, B);
    return 0;
}