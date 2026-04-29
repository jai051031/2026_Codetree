#include <iostream>
using namespace std;
int f(int a, int b, int c){
    if(a < b && a < c)
        return a;
    if(b < a && b < c)
        return b;
    if(c < a && c < b)
        return c;
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << f(a, b, c);
    return 0;
}