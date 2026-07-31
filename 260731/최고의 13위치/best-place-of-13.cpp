#include <iostream>
using namespace std;

int main() {
    int n, a[20][20], max = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n-2; i++){
        for(int j=0; j<n; j++){
            int cnt = 0;
            for(int k=i; k<i+3; k++){
                cnt += a[j][k];
            }
            if(cnt > max)
                max = cnt;
        }
    }
    cout << max;
    return 0;
}