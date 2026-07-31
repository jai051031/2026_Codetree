#include <iostream>
using namespace std;

int main() {
    int n, m;
    char a[15][15];
    int cnt = 0;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    if(a[0][0] == a[n-1][m-1]){
        cout << '0';
        return 0;
    }
    for(int i=1; i<n-2; i++){
        for(int j=1; j<m-2; j++){
            if(a[i][j] != a[0][0]){
                for(int k=i+1; k<n-1; k++){
                    for(int l=j+1; l<m-1; l++){
                        if(a[k][l] != a[i][j]){
                            cnt++;
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}