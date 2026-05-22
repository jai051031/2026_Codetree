#include <iostream>
using namespace std;

int main() {
    int n, b, a[10000], i = 0;
    cin >> n >> b;
    while(n > b){
        a[i] = n % b;
        i++;
        n /= b;
    }
    a[i] = n;
    for(int j=i; j>=0; j--){
        cout << a[j];
    }
    return 0;
}