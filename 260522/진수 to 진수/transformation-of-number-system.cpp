#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, arr[10];
    cin >> a >> b;
    int n;
    cin >> n;
    int sum = 0, i = 0;
    while(n >= 1){
        sum += n%10 * pow(a, i);
        i++;
        n /= 10;
    }
    i = 0;
    while(sum >= b){
        arr[i] = sum % b;
        sum /= b;
        i++;
    }
    arr[i] = sum;
    for(int j=i; j>=0; j--){
        cout << arr[j];
    }
    return 0;
}