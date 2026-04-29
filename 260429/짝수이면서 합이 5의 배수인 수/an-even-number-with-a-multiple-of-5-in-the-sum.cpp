#include <iostream>
using namespace std;
void f(int n){
    if((n/10 + n%10) % 5 == 0 && n % 2 == 0)
        cout << "Yes";
    else
        cout << "No";
}
int main() {
    int n;
    cin >> n;
    f(n);
    return 0;
}