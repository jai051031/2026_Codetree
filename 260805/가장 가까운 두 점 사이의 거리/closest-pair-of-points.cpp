#include <iostream>
#include <cmath>
using namespace std;
int abs(int n){
    if(n < 0)
        n *= -1;
    return n;
}
int main() {
    int n, a[100][2], min = 100000, minS;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i][0] >> a[i][1];
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int S = pow(abs(a[i][0] - a[j][0]), 2) + pow(abs(a[i][1] - a[j][1]), 2);
            if(min > S){
                min = S;
            }
        }
    }
    cout << min;
    return 0;
}