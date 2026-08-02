#include <iostream>
using namespace std;
int abs(int n){
    if(n < 0)
        n *= -1;
    return n;
}
int main() {
    int n, h, t, a[100], min = 1000000;
    cin >> n >> h >> t;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<=n-t; i++){
        int sum = 0;
        for(int j=i; j<i+t; j++){
            sum += abs(a[j]-h);
        }
        if(min > sum)
            min = sum;
    }
    cout << min;
    return 0;
}