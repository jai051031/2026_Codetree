#include <iostream>
using namespace std;

int main() {
    int n, a[100][2], max = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i][0] >> a[i][1];
    }
    for(int i=0; i<n; i++){
        int cnt = 0, b[1000] = {0};
        for(int j=0; j<n; j++){
            if(i != j){
                for(int k=a[j][0]; k<a[j][1]; k++){
                    b[k]++;
                }
                
            }
        }
        for(int k=0; k<1000; k++){
            if(b[k] != 0)
                cnt++;
        }
        if(max < cnt)
            max = cnt;
    }
    cout << max;
    return 0;
}