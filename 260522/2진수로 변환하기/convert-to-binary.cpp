#include <iostream>
using namespace std;

int main() {
    int n, a[10000], i = 0;
    cin >> n;
    while(n > 1){
        a[i] = n % 2;
        i++;
        n /= 2;
    }
    a[i] = n;
    for(int j=i; j>=0; j--){
        cout << a[j];
    }
    return 0;
}