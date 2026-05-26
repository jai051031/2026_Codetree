#include <iostream>
using namespace std;

int main() {
    int a[3000][3000] = {0}, cnt = 0;
    int x1[3], y1[3], x2[3], y2[3];
    for(int i=0; i<3; i++){
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        x1[i] += 1000;
        y1[i] += 1000;
        x2[i] += 1000;
        y2[i] += 1000;
        for(int j=y1[i]; j<y2[i]; j++){
            for(int k=x1[i]; k<x2[i]; k++){
                a[j][k]++;
            }
        }
    }
    for(int i=0; i<2; i++){
        for(int j=y1[i]; j<y2[i]; j++){
            for(int k=x1[i]; k<x2[i]; k++){
                if(a[j][k] == 1)
                    cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}