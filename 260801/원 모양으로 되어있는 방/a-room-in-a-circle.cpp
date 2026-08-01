#include <iostream>
using namespace std;

int main() {
    int n, a[1005], min = 100000000;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i+1; j<n; j++){
            sum += (j-i) * a[j];
        }
        for(int j=i-1; j>=0; j--){
            sum += (n-i+j) * a[j];
        }
        if(min > sum)
            min = sum;
    }
    cout << min;

    return 0;
}