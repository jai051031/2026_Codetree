#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    cout.precision(1);
    int a, b;
    cin >> a >> b;
    double sum = a + b;
    cout << a+b << " " << sum/2;
    return 0;
}