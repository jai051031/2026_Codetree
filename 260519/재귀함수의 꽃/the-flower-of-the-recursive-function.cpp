#include <iostream>
using namespace std;
void f(int a, int b){
    if(a < b)
        return;
    cout << a << " ";
    f(a-1, b);
    cout << a << " ";
    
}
int main() {
    int n;
    cin >> n;
    f(n, 1);
    return 0;
}