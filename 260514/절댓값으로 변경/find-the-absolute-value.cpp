#include <iostream>
using namespace std;
void f(int *n){
    if(*n < 0)
        *n *= -1;
}
int main() {
    int n, a[100];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        f(&a[i]);
        cout << a[i] << " ";
    }
    
    return 0;
}