#include <iostream>
using namespace std;
int f(int n, int a[], int i, int max){
    if(i == n){
        return max;
    }
    if(a[i] > max)
        return f(n, a, i+1, a[i]);
    else
        return f(n, a, i+1, max);
}
int main() {
    int n, a[100];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << f(n, a, 0, 0);
    return 0;
}