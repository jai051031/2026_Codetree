#include <iostream>
using namespace std;
void f(int n){
    if(n != 0)
        cout << "HelloWorld" << endl;
    else
        return;
    f(n-1);
}
int main() {
    int n;
    cin >> n;
    f(n);
    return 0;
}