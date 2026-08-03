#include <iostream>
using namespace std;
int abs(int n){
    if(n < 0)
        n *= -1;
    return n;
}
int main() {
    int a[6], sum = 0, min = 10000000;
    for(int i=0; i<6; i++){
        cin >> a[i];
        sum += a[i];
    }
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            for(int k=0; k<6; k++){
                if(i != j && j != k && k != i){
                    int sum1 = a[i] + a[j] + a[k];
                    int sum2 = sum - sum1;
                    if(min > abs(sum1 - sum2))
                        min = abs(sum1 - sum2);
                }
            }
        }
    }
    cout << min;
    return 0;
}