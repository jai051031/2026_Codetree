#include <iostream>
using namespace std;

int main() {
    int n, a[100], cnt = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            double sum = 0;
            for(int k=i; k<=j; k++){
                sum += a[k];
            }
            sum /= j-i+1;
            for(int k=i; k<=j; k++){
                if(a[k] == sum){
                    cnt++;
                    k = j;
                }
            }
        }
    }
    cout << cnt + n;
    return 0;
}