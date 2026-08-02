#include <iostream>
using namespace std;

int main() {
    int n, k, a[100], b[100], c[10000]={0}, max = 0, M = 0;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
        c[b[i]-1] += a[i];
    }
    int K = 2*k+1;
    for(int i=0; i<200; i++){
        int sum = 0;
        for(int j=i; j<i+K; j++){
            sum += c[j];
        }
        if(max < sum)
            max = sum;
    }
    cout << max;
    return 0;
}