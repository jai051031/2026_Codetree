#include <iostream>
using namespace std;

int main() {
    int n, a[2000][2000] = {0}, cnt = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        x += 100;
        y += 100;
        for(int j=y; j<y+8; j++){
            for(int k=x; k<x+8; k++){
                a[j][k]++;
            }
        }
    }
    for(int i=0; i<2000; i++){
        for(int j=0; j<2000; j++){
            if(a[i][j] >= 1)
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}