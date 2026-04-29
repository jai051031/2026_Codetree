#include <iostream>
using namespace std;
int print(int n){
    int num = 0;
    for(int i=1; i<=n; i++){
        num += i;
    }
    return num;
}
int main() {
    int n;
    cin >> n;
    cout << print(n)/10;
    return 0;
}