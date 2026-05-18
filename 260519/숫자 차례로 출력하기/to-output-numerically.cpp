#include <iostream>
using namespace std;
void f1(int n){
    if(n >= 1)
        cout << n << " ";
    else
        return;
    f1(n-1); 
}
void f2(int n, int a){
    if(a <= n)
        cout << a << " ";
    else
        return;
    f2(n, a+1);
}
int main() {
    int n;
    cin >> n;
    f2(n, 1);
    cout << endl;
    f1(n);
    return 0;
}