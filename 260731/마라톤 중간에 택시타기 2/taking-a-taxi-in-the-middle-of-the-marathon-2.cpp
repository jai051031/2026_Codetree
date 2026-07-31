#include <iostream>
using namespace std;
int abs(int n){
    if(n < 0)
        n *= -1;
    return n;
}
int main() {
    int n, x[100], y[100], min = 10000000;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }
    for(int i=1; i<n-1; i++){
        int sum = 0;
        for(int j=1; j<n; j++){
            if(j != i){
                if(j-1 == i){
                    sum += abs(x[j]-x[j-2]);
                    sum += abs(y[j]-y[j-2]);
                }
                else{
                    sum += abs(x[j]-x[j-1]);
                    sum += abs(y[j]-y[j-1]);
                }
            }
        }
        if(min > sum)
            min = sum;
    }
    cout << min;
    return 0;
}