#include <iostream>
using namespace std;

int main() {
    int n, k, arr[100] = {0}, max = 0;
    cin >> n >> k;
    for(int i=0; i<k; i++){
        int a, b;
        cin >> a >> b;
        for(int j=a-1; j<b; j++){
            arr[j]++;
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    cout << max;
    return 0;
}