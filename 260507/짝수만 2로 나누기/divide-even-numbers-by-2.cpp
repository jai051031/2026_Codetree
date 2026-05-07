#include <iostream>
using namespace std;
void f(int n, int *a){
    for(int i=0; i<n; i++){
        if(a[i] % 2 == 0){
            a[i] /= 2;
        }
    }
}
int main() {
    int n, a[50];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    f(n, a);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}