#include <iostream>
using namespace std;

int main() {
    int n, k, a[100], max = 0;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<=n-k; i++){
        int sum = 0;
        for(int j=i; j<i+k; j++){
            sum += a[j];
        }
        if(max < sum)
            max = sum;
    }
    cout << max;
    return 0;
}