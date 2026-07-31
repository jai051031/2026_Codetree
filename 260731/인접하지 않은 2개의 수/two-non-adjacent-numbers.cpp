#include <iostream>
using namespace std;

int main() {
    int n, a[100], max = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+2; j<n; j++){
            if(max < a[i] + a[j])
                max = a[i] + a[j];
        }
    }
    cout << max;
    return 0;
}