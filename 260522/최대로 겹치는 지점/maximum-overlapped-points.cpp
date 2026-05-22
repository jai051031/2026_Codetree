#include <iostream>
using namespace std;

int main() {
    int n, a[100] = {0};
    cin >> n;
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        for(int j=x; j<=y; j++){
            a[j]++;
        }
    }
    int max = 0;
    for(int i=0; i<100; i++){
        if(a[i] > max)
            max = a[i];
    }
    cout << max;
    return 0;
}