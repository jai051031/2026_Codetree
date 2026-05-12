#include <iostream>
using namespace std;
int f(int *a, int *b){
    if(*a > *b){
        *a += 25;
        *b *= 2;
    }
    else{
        *b += 25;
        *a *= 2;
    }
    return 0;
}
int main() {
    int a, b;
    cin >> a >> b;
    f(&a, &b);
    cout << a << " " << b;
    return 0;
}