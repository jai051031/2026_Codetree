#include <iostream>
using namespace std;
int a[100];
int f(int a1, int a2){
    int sum = 0;
    for(int i=a1; i<=a2; i++){
        sum += a[i-1];
    }
    return sum;
}
int main() {
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int a1, a2;
    for(int i=0; i<m; i++){
        cin >> a1 >> a2;
        cout << f(a1, a2) << endl;
    }
    

    return 0;
}