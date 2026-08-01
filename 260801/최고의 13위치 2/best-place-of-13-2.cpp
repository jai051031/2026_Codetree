#include <iostream>
using namespace std;

int main() {
    int n, a[20][20], b[18][18] = {0}, max = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-2; j++){
            for(int k=j; k<j+3; k++){
                b[i][j] += a[i][k];
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-2; j++){
            for(int x=j+3; x<n-2; x++){
                if(b[i][j] + b[i][x] > max)
                    max = b[i][j] + b[i][x];
            }
            for(int y=i+1; y<n; y++){
                if(b[i][j] + b[y][j] > max)
                    max = b[i][j] + b[y][j];
            }
        }
    }
    cout << max;
    return 0;
}