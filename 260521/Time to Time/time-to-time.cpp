#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a == c){
        cout << d-b;
    }
    else{
        cout << (60-b) + d + 60*(c-a-1);
    }
    return 0;
}