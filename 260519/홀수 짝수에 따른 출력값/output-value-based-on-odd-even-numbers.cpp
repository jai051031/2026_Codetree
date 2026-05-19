#include <iostream>
using namespace std;
int f(int n, int a){
    if(n == a)
        return a;
    return n + f(n-2, a);
}
int main() {
    int n, a;
    cin >> n;
    if(n % 2 == 0)
        a = 2;
    else
        a = 1;
    cout << f(n, a);
    return 0;
}