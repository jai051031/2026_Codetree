#include <iostream>
using namespace std;
void f(int n, int a){
    if(a > n)
        return;
    for(int i=0; i<a; i++){
        cout << "*";
    }
    cout << endl;
    f(n, a+1);
}
int main() {
    int n;
    cin >> n;
    f(n, 1);
    return 0;
}