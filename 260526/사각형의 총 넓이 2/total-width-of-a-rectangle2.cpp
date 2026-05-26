#include <iostream>
using namespace std;

int main() {
    int n, a[300][300] = {0}, cnt = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += 100;
        y1 += 100;
        x2 += 100;
        y2 += 100;
        for(int j=y1; j<y2; j++){
            for(int k=x1; k<x2; k++){
                a[j][k]++;
            }
        }
    }
    for(int i=0; i<300; i++){
        for(int j=0; j<300; j++){
            if(a[i][j] > 0){
                //cout << a[i][j] << " ";
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}